# AIShell

1:	安装依赖包

sudo apt-get install jq

2:	注册百度服务
	
百度智能云千帆大模型，启动ERNIE-Speed-128K服务

3:	获取access_token

curl -X POST 'https://aip.baidubce.com/oauth/2.0/token?grant_type=client_credentials&client_id=[API Key]&client_secret=[Secret Key]'  -H 'Content-Type: application/json' 

4:	编辑AI

把"自行填写百度的access_token"替换为上一步获得的access_token。存盘保存。

5:	编译格式化器(用于清除非中文)CleanChar

g++ CleanChar.cpp -o CleanChar -O3 -Wall -static -s

6:	把AI和CleanChar拷贝到/usr/bin/

sudo cp AI CleanChar /usr/bin/

7:	测试

AI	写一首关于秋天的小诗
