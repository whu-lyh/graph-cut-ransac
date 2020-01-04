#include <vector>
#include <string>

int findFundamentalMatrix_(std::vector<double>& srcPts,
                           std::vector<double>& dstPts,
                           std::vector<bool>& inliers,
                           std::vector<double>&F,
                           int h1, int w1, int h2, int w2,
                           double threshold,
                           double conf,
                           int max_iters);

int findEssentialMatrix_(std::vector<double>& srcPts_norm,
                           std::vector<double>& dstPts_norm,
                           std::vector<bool>& inliers,
                           std::vector<double>&E,
                               std::vector<double>& src_K,
                           std::vector<double>& dst_K,
                   
                           int h1, int w1, int h2, int w2,
                           double threshold,
                           double conf,
                           int max_iters);


int findHomography_(std::vector<double>& srcPts,
                    std::vector<double>& dstPts,
                    std::vector<bool>& inliers,
                    std::vector<double>& H,
                    int h1, int w1, int h2, int w2,
                           double threshold,
                           double conf,
                           int max_iters);
