#include <cstddef>
#include <vector>

#include "OctreePoint.h"

class Octree
{
    cv::Point3f origin_;         //客观世界这个节点的中心
    cv::Point3f halfDimension_;  //半径

    Octree* children_[8];
    OctreePoint* data_;

   public:
    Octree(const cv::Point3f& origin, const cv::Point3f& halfDimension)
        : origin_(orign), halfDimension_(halfDimension),data(NULL)
    {

        for(int i = 0;i<8;++i)
        children_[i] = NULL;
    }

    ~Octree() {
			// Recursively destroy octants
			for(int i=0; i<8; ++i) 
				delete children_[i];
		}

/**
 * @brief 获取这个点在哪个象限
 * 
 * @param point 
 * @return int 
 */
    int GetOctantContainingPoint(const cv::Point3f& point) const{
        int oct = 0;
        if(point.x >= origin.x) oct|= 4;
        if(point.y >= origin.y) oct|= 2;
        if(point.z >= origin.z) oct|= 1;
        return oct;

    }    

    /**
     * @brief 
     * 
     * @param point 
     */
    void IsLeafNode()
    {
        return children_[0] = NULL; //没有孩子结点,只用check一个就够了
    }
    void Insert(Octree* point)
    {
        if(IsLeafNode())
        {
            if(data == NULL)
            {
                data = point;
                return;
            }
            else
            {
                OctreePoint *oldPoint = data;
                data = NULL;
                for(int i = 0 ;i<8;++i)
                {
                    cv::Point3f newOrigin = origin;
                }
            }
            
        }
    }
};