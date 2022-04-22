#pragma comment(lib, "windowsapp") 

#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Web.Syndication.h"

using namespace winrt;

using namespace Windows::Foundation;
using namespace Windows::Web::Syndication;

IAsyncAction Sample()
{
   Uri uri( L"http://kennykerr.ca/feed" );
   SyndicationClient client;
   SyndicationFeed feed = co_await client.RetrieveFeedAsync( uri );

   for ( SyndicationItem item : feed.Items() )
   {
      hstring title = item.Title().Text();

      printf( "%ls\n", title.c_str() );
   }
}

int main()
{
   Sample().get();
}