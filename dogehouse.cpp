#include "dogehouse.h"
#include "httplib.h"

namespace Dogehouse
{
  char *DEFUALT_PATH = "/api/bot";
  httplib::Client cli("https://dogehouse.tv");

  bool Bot::Connect(char *_username, char *_password)
  {
    httplib::Result result = cli.Post(DEFUALT_PATH);

    if (result->status == 4001)
    {
      throw "Invalid Dogehouse Token!";
    }

    if (result->status == 200)
    {
      return true;
    }

    throw "Error While Connecting";
  }
};