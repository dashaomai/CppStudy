#include <iostream>
#include <fstream>
#include <string>

#include "msg.pb.h"

using namespace std;

int main(int argc, const char *argv[])
{
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  mxw::createRoleRet message;
  message.set_ncode(0);

  if (!message.SerializeToOstream(&cout)) {
    cerr << "Failed to write message" << endl;
  }

  google::protobuf::ShutdownProtobufLibrary();

  return 0;
}
