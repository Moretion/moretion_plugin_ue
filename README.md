# moretion_plugin_ue
魔迅动捕配套ue插件

## 1. ue软件准备
此插件基于ue5.3引擎编写
ue官方下载链接：https://www.unrealengine.com/zh-CN/download

## 2. 插件下载
克隆此项目根据自己需求选择使用MotionSuit_ue5.3还是MotionSuit_ue5.4，分别对应ue5.3版本和ue5.4版本

## 3. 插件安装说明
3.1 先下载 Epic Games 虚幻引擎，在 Epic 中找到 UE 引擎下载，安装引擎时需注意不要勾选
引擎源代码选项。
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image1.jpg" alt="提示图" width="800"/>
</p>

3.2 安装好引擎后先将 MotionSuit_ue5.3或 MotionSuit_ue5.4改为MotionSuit

3.3 打开 UE 新建空白工程。
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image3.jpg" alt="提示图" width="800"/>
</p>

3.4 创建项目后找到项目文件夹，在项目文件夹中新建 Plugins 文件夹，将解压好的 motion
文件夹拖入 Plugins 文件夹中（新建文件夹名字必须为 plugins）。
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image4.jpg" alt="提示图" width="800"/>
</p>

3.5 重新启动 UE 引擎，在编辑—插件中可以看到插件是否已经启用，若未启用请勾选启用。
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image5.jpg" alt="提示图" width="800"/>
</p>

3.6 在引擎下方的内容测滑菜单可以看到插件内容（注意不要把右侧大纲页面关掉）；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image6.png" alt="提示图" width="800"/>
</p>
若内容测滑菜单没有显示插件内容，请在内容侧滑菜单中的设置中点击显示插件内容。
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image7.png" alt="提示图" width="800"/>
</p>

## 4.Motion Studio 软件数据广播配置
4.1 在同一电脑上进行串流（一定要记住 IP 和端口数字，会在 UE 插件中 Connector 设
置串流参数）
开启 Motion Studio 软件的数据广播，设置并记录串流端口、传输协议、旋转数据类型：

TCP:
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image8.png" alt="提示图" width="800"/>
</p>

UDP:
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image9.png" alt="提示图" width="800"/>
</p>

4.2 跨电脑串流

现将启用 MotionStudio 的电脑为 M，启用 UE5 的电脑为 U；
注：跨设备串流需要两台设备在同一局域网下，非同一局域网下请自行获取公网 IP 或使用内
网穿透工具。
查看 IP 方式：WIN + R 键唤出 运行窗，并输入 cmd，再点击确定,在 CMD 窗口中输入 ipconfig
并按下回车，找到 IPv4 地址，该地址为电脑的的局域网地址。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image10.png" alt="提示图" width="800"/>
</p>

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image11.png" alt="提示图" width="800"/>
</p>

TCP：跟单电脑设备操作无异，在 U 中输入 M 的串流设置即可；

UDP：记录 U 的 IP 地址，在 M 的串流设置中填入 U 的 IP 地址以及端口（端口自定义）。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image12.png" alt="提示图" width="800"/>
</p>


## 5. 将自己的模型导入引擎驱动数据

5.1 在 MotionSuit 内容 Blueprints 中的双击打开 Connector 设置串流参数
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image13.png" alt="提示图" width="800"/>
</p>

将 Motion Studio 中设置的 IP 和 Port 填入蓝图节点中，并根据 MS 串流设置决定是否勾选
Use Udp（勾选时为使用 UDP 传输），设置完毕后点击编译、保存。
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image14.png" alt="提示图" width="800"/>
</p>
Address：MS 中设置的 IP；
Port：MS 中设置的端口；
Use Udp：是否使用 UDP 串流（勾选时为使用）；
Log Message：是否在控制台打印接收到的数据（勾选时为打印）；
拖入前最好点先点一下运行和停止（不然后面会看不到模型），设置完毕后的 Connector 拖
入场景中（确保场景中存在该 Actor）。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image15.png" alt="提示图" width="800"/>
</p>

5.2 将自己的模型导入引擎
点击内容侧滑菜单右上角的导入按钮，找到并选择自己的模型文件(.FBX)，并点击打开，最后
点击导入所有；

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image16.png" alt="提示图" width="800"/>
</p>

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image17.png" alt="提示图" width="800"/>
</p>

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image18.png" alt="提示图" width="800"/>
</p>
导入成功后，内容浏览器会显示导入的模型（最好导入内容文件夹中），然后点击保存所有。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image19.png" alt="提示图" width="800"/>
</p>

5.3 选择骨骼模型点击鼠标右键，点击创建—动画蓝图。
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image20.png" alt="提示图" width="800"/>
</p>

创建后双击打开动画蓝图，点击 Result 引脚拖长，输入 MotionPoseNod；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image21.png" alt="提示图" width="800"/>
</p>

MotionPoseNod 框和 Result 框相连接后，点击 MotionPoseNod 框，可配置右侧细节框中配
置骨骼对应关系；

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image22.png" alt="提示图" width="800"/>
</p>

对应的骨骼关系需找到 Plugins-MotionSuit 内容-Resources-Models-Default 中的
StandardModel；

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image23.png" alt="提示图" width="800"/>
</p>

打开动作蓝图，选中 MotionPoseNod 框，需拷贝 Motion Body Map、Left Fingers MAP、Right
Fingers MAP 数据；

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image24.png" alt="提示图" width="800"/>
</p>

右侧细节框中配置骨骼对应关系配置完成后，最后点解左上角的编译和保存。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image25.png" alt="提示图" width="800"/>
</p>
注：对应关节没有快捷配置方法只能自己手动配置上或直接复制样例动画蓝图的信息，复制
完后要查看关节是否全部配置上了。

5.4 初始姿态非 T-Pose 的模型需要新建 T-Pose 动画（如果是 T-pose 则无需进行此步骤，跳过）。
以 Unreal 引擎标准小白人为例，该模型的初始姿态为 A-Pose；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image26.png" alt="提示图" width="800"/>
</p>
先为该模型创建动画合成；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image27.png" alt="提示图" width="800"/>
</p>
打开动画合成，在骨架树窗口点击选择骨骼（以左上臂为例），在中间视窗进行角度调整，直
至将模型姿态调整为 T-Pose；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image28.png" alt="提示图" width="800"/>
</p>
在上方工具栏中点击创建资源->创建动画->当前姿势，将 T Pose 保存为动画；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image29.png" alt="提示图" width="800"/>
</p>
将新建的 T-Pose 动画拖入动画蓝图中，并将该动画的输出引脚与 MotionPoseNode 的 TPose
引脚相连并点击编译和保存。

5.5 新建 ModelController 蓝图，并在蓝图中的在 SkeletalMesh 中设置模型的蒙皮以及动画蓝
图（第三布中创建的动画蓝图），将该 ModelController 拖入场景中。
右键点击内容浏览器空白处新建蓝图；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image30.png" alt="提示图" width="800"/>
</p>
在所有类收藏夹搜索框输入 ModelController 并点击打开；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image31.png" alt="提示图" width="800"/>
</p>
新建成功后双击打开该蓝图，在网格体-骨骼网格体资产处设置蒙皮（自己导入的模型的蒙皮）
以及动画-动画类处选择第三步中创建的动画蓝图，随后点击编译、保存 。
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image32.png" alt="提示图" width="800"/>
</p>

将该 ModelController 拖入场景中（若拖入进去显示为一个球则点击开始录制按钮再点击结束
录再将 modelcontroller 拖入即可）。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image33.png" alt="提示图" width="800"/>
</p>

5.6 多设备数据使用说明（只使用一个模型可跳过此步骤）
当 MS 中有多个角色（多套动捕设备）时，请在场景中加入对应数量的 ModelController（需
要几个模型就拖拽第 5.5 步创建的 ModelController 几次）。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image34.png" alt="提示图" width="800"/>
</p>

5.7 设置角色名字，在细节窗口中搜索并修改 ActorName 属性，填入 MS 中角色头顶的角色名；
运行时 ModelController 会根据 ActorName 获取对应设备的动作数据；
*注：ActorName 可以为空（为空代表着没有绑定 motion 中的设备，可以根据任意设备进行
动作）。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image35.png" alt="提示图" width="800"/>
</p>

5.8 数据广播开启后，未连接设备可传输离线数据；
查看文件列表，双击选择数据文件播放；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image36.png" alt="提示图" width="800"/>
</p>

点击运行按钮，可传输离线数据；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image37.png" alt="提示图" width="800"/>
</p>

5.9 数据广播开启后，连接设备可传输实时数据
连接设备后，并进行姿势校准；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image38.png" alt="提示图" width="800"/>
</p>

点击运行按钮，可传输实时数据。
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image39.png" alt="提示图" width="800"/>
</p>

## 6. 用插件自带的模型驱动数据

6.1 点击内容测滑菜单，找到 Plugins-MotionSuit 内容，双击打开 Example。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image40.png" alt="提示图" width="800"/>
</p>

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image41.png" alt="提示图" width="800"/>
</p>

若之前修改过数据，双击 Example 时，会提示是否保存之前的数据，若需要保存，点击保存。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image42.png" alt="提示图" width="800"/>
</p>

6.2 点击界面右侧大纲处，点击编辑 Connector。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image43.png" alt="提示图" width="800"/>
</p>
将 Motion Studio 中设置的 IP 和 Port 填入蓝图节点中，并根据 MS 串流设置决定是否勾选
Use Udp（勾选时为使用 UDP 传输），设置完毕后点击编译、保存。
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image44.png" alt="提示图" width="800"/>
</p>
Address：MS 中设置的 IP；
Port：MS 中设置的端口；
Use Udp：是否使用 UDP 串流（勾选时为使用）；
Log Message：是否在控制台打印接收到的数据（勾选时为打印）。

6.3 设置角色名字，在细节窗口中搜索并修改 ActorName 属性，填入 MS 中角色头顶的角色名；
运行时 ModelController 会根据 ActorName 获取对应设备的动作数据。
注：ActorName 可以留空（留空代表着没有绑定 motion 中的设备，可以根据任意设备进行动作）。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image45.png" alt="提示图" width="800"/>
</p>

6.4 数据广播开启后，未连接设备可传输离线数据。
查看文件列表，双击选择数据文件播放；

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image46.png" alt="提示图" width="800"/>
</p>
点击运行按钮，可传输离线数据；
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image47.png" alt="提示图" width="800"/>
</p>

6.5 数据广播开启后，连接设备可传输实时数据。
连接设备后，并进行姿势校准

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image48.png" alt="提示图" width="800"/>
</p>
点击运行按钮，可传输实时数据；

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image49.png" alt="提示图" width="800"/>
</p>

## 7. 其它问题
7.1 若右侧大纲、细节被关闭，点击窗口，找到大纲按钮，选择大纲视图 1，细节窗口看下图。

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image50.png" alt="提示图" width="800"/>
</p>

<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image51.png" alt="提示图" width="800"/>
</p>

7.2 若需要删除已创建的模型，可在大纲处选中需要删除的模型，按 DELETE 键，可删除成功。
<p align="center">
  <img src="https://github.com/Moretion/moretion_plugin_ue/blob/main/Images/image52.png" alt="提示图" width="800"/>
</p>













