#include "TweetBankCLR.h"

namespace TweetBank
{
   TweetBankCLR::TweetBankCLR()
   {
      mTweetBankCore = new TweetBankCore();
   }

   void TweetBankCLR::tweet()
   {
      mTweetBankCore->tweet();
   }
}