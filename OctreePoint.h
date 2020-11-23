#pragma once

#include <opencv2/opencv.hpp>

// Simple point data type to insert into the tree.
// Have something with more interesting behavior inherit
// from this in order to store other attributes in the tree.
class OctreePoint {
	cv::Point3f position; 
public:
	OctreePoint() { }
	OctreePoint(const cv::Point3f& position) : position(position) { }
	inline const cv::Point3f& getPosition() const { return position; }
	inline void setPosition(const cv::Point3f& p) { position = p; }
};

