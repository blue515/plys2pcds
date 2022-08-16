#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_types.h>
using namespace pcl;
using namespace pcl::io;
int main(int argc,char* argv)
{
    pcl::PLYReader reader;
    pcl::PointCloud<pcl::PointXYZRGBA>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGBA>);
    std::string path1 = "/home/blue/blender/train/jar/plys/";
    std::string path2 = "/home/blue/blender/train/jar/pcds/";
    for(int i=1;i<10;i++)
    {
        std::string ply_cloud = path1+"jar_00"+boost::to_string(i)+".ply";
        std::string pcd_cloud = path2+"jar_00"+boost::to_string(i)+".pcd";
        reader.read<pcl::PointXYZRGBA>(ply_cloud,*cloud);
        pcl::io::savePCDFile(pcd_cloud,*cloud);
    }
    for(int i=10;i<17;i++)
    {
        std::string ply_cloud = path1+"jar_0"+boost::to_string(i)+".ply";
        std::string pcd_cloud = path2+"jar_0"+boost::to_string(i)+".pcd";
        reader.read<pcl::PointXYZRGBA>(ply_cloud,*cloud);
        pcl::io::savePCDFile(pcd_cloud,*cloud);
    }
    return 0;
}
