#include <stdio.h>
#include <cur/curl.h>
int main(void)
{
CURL *curl;
CURLcode res;
curl=curl_easy_init();
if(curl)
{
curl_esay_setopt(curl,CURLOPT_URL,"http://myip.ipip.net/");
res=curl_esay_perform(curl);
if(res!=CURLE_OK)
fprintf(stderr,"curl_easy_perform()failed:%s\n",curl_esay_strerror(res)):
curl_easy_cleanup(curl):
}
return 0;
}
