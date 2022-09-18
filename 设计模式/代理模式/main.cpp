#include "Router.h"
#include "PC.h"

int main()
{
	/*Internet *router = new Router;
	router->access("http://www.baidu.com/?s=114514");
	router->call("114514","1919");
	router->access("http://www.baidu.com/?s=114514");
	((Router*)router)->addFilter("http://www.baidu.com");
	router->access("http://www.baidu.com/?s=114514");
	router->access("http://www.google.com/");*/
	//使用猫
	/*PC pc;
	pc.SetInternet(new Modem);
	pc.call("114514", "1919");
	pc.access("http://www.baidu.com/?s=114514");*/

	//使用路由器
	Internet *router = new Router;
	router->call("114514", "1919");
	PC pc;
	pc.SetInternet(router);
	pc.access("http://www.baidu.com/?s=114514");
	((Router*)router)->addFilter("http://www.dy.com");
	pc.access("http://www.dy.com/?s=114514");
}
