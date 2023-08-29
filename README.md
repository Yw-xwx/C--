Edit your readme.md
----------------
* use two blanks--"  " in the end to start from the third row (which means all rows are separted by one blank row);
* different from "  " mentioned above, "\</br>" just start from the next row without blanks;
* use "* " to list sth all;(if you find the following rows are all listed with the above,just leave a blank row);
* use "\"to avoid the escape(用反斜杠避免转义);

Basic:
------------
    工作区内是untracked files;
    add操作进入暂存区;
    commit进入本地版本库;
    push进入GitHub远程仓库;

    pull直接从远程仓库进入工作区;
    fetch把文件从远程仓库拉入本地版本库，本地文件暂时无变化;
    diff比较本地版本库和本地文件的区别;

Error:
-------------
    1.经典错误之仓库的url拷贝存在不可见字符导致找不到库:
        git config -l 查看remote.origin.url即可发现该不可见字符;
        在.git文件夹内找到config文件,修改url即可。
    2.执行git push的error: 
        the current branch master has no upstream branch,当前的本地分支没有和远程分支相关联
        git pull拉下来，再git push origin master把本地的推送到master分支.
    3.OpenSSL SSL_connect: Connection was reset in connection to github.com:443
        代理结点问题，换个结点试试

First Push Steps:
----------------------------
    1.Edit your code in your our PC;
    2.In the folder of your code,click the right button of your mouse,choose "Git Bash here";
    3.Go to your github account,create a new repository and give it a name;
    4.Now "git init",it will create a folder called ".git" in your folder;
    5."git add folder-A file-B folder-C", the files or folders are seperated with "Spacebar" 
    6.You can use "git status" to see the status now as you want;
    7."  git commit -m "what-you-want-to-say-when-you-commit"   ";
    8."git remote add origin https://github.com/Yw-xwx/HNUCryptographySystem",
    here is an example showed the characters you can't see,just modify it.
    9."git push origin master" and wait it succeed.
If you want to modify the code:
--------------------------
    1.git clone url;
    2.modify the code;
    3.git status查看文件区别;
    4.在modify的文件列表中选择要上传的文件git add file1 file2……;
    5.git status查看文件状态,上述add的文件已变色,从工作区进入暂存区;
    6.git commit -m "注释";
    7.git push报错看上面error2;
    或者直接git push origin master(如果远程仓库有master分支)
  
Others:<br>
{<br>
set up the name and email:<br>
    git config --global user.name "username"<br>
    git config --global user.email  useremail@qq.com<br>
assure the name and email:<br>
    git config user.name<br>
    git config user.email<br>
    

    git remote rename origin new_name
    git remote add origin https://github.com/Yw-xwx/Hello-github
    
    git log-----check the history of the repository
    touch .gitignore-----create a file to ignore files in it
        in gitignore,you can just input the name of the file,so it will ignore the file when you commit a lot of files to your github
    
<br>
branch:<br>
    git branch BranchName-----create a new branch<br>
    git branch  -----show all your branches<br>
    git checkout BranchName-----go to the new branch<br>
    git checkout -b BranchName-----create a new branch and go to the new branch<br>
    git branch -d BranchName------delete the branch:(-D to delete it very sure)<br>
<br>
}
