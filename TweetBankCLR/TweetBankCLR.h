#pragma once
#include "TweetBankCore.h"

namespace TweetBank
{
   public ref class TweetBankCLR
   {
   public:
      TweetBankCLR();
      void tweet();
   private:
      TweetBankCore* mTweetBankCore;
   };

}

