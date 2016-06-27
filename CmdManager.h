#ifndef CMSYS_CMDMANAGER_H
#define CMSYS_CMDMANSGER_H

#include "CourseManager.h"
#include "Cmd.h"

#include <map>
#include <iostream>
using namespace std;

class CmdManager{
public:
    //构造函数
    CmdManager() = default;
    //初始化函数，初始化支持的命令和课程信息
    void Init();
    //打印帮助信息
    void PrintAllHelp() const;
    //根据命令查询帮助信息
    void PrintCmdHelp(const CourseCmd cmd) const;
    //处理命令操作
    bool HandleCmd(const CourseCmd cmd);
    //返回课程管理对象
    CourseManager& GetCourseManager() {return manager;};
private:
    //课程管理对象
    CourseManager manager;
    //使用map存储命令及帮助信息
    map<CourseCmd,string> cmdMap;
};

#endif // CMSYS_CMDMANAGER_H
