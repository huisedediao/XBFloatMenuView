# XBFloatMenuView
浮动菜单

<br/>

### 效果图：
![image](https://github.com/huisedediao/XBFloatMenuView/raw/master/show.gif)<br/>

<br>
### 示例代码：
<br>
<pre>
    XBFloatMenuView *menu = [[XBFloatMenuView alloc] initWithDisplayView:[[UIApplication sharedApplication].delegate window] titleArr:@[@"titile1",@"title2"] imgArr:nil width:70 spaceToTop:64 spaceToRight:10];
    menu.bl_click = ^(NSInteger index) {
        NSLog(@"%zd",index);
    };
    [menu show];
</pre>