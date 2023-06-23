#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <muduo/net/EventLoop.h>
#include <muduo/net/TcpServer.h>
using namespace muduo;
using namespace muduo::net;

// 聊天服务器的主类
class ChatServer {
 public:
  // 初始化聊天服务器对象
  ChatServer(EventLoop *loop, const InetAddress &listenAddr,
             const string &nameArg);

  // 启动服务
  void start();

 private:
  // 处理连接相关信息的回调函数
  void onConnection(const TcpConnectionPtr &);

  // 处理读写事件相关信息的回调函数
  void onMessage(const TcpConnectionPtr &, Buffer *, Timestamp);

 private:
  TcpServer _server;  // 组合的muduo库，实现伏
  EventLoop *_loop;
};

#endif