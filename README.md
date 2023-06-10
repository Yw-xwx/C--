
    工作区内是untracked files;
    add操作进入暂存区;
    commit进入本地版本库;
    push进入GitHub远程仓库;

    pull直接从远程仓库进入工作区;
    fetch把文件从远程仓库拉入本地版本库，本地文件暂时无变化;
    diff比较本地版本库和本地文件的区别;

Error:<br>
    1.经典错误之url拷贝存在不可见字符导致找不到库：<br>
        git config -l 查看remote.origin.url即可发现该不可见字符;<br>
        在.git文件夹内找到config文件,修改url即可。<br>
    2.git commit -m "version-1" error:<br>
        ->  git commit -am "version-1"<br>
    3.git push origin master error:<br>
        -> git pull --rebase origin master<br>
    4.OpenSSL SSL_connect: Connection was reset in connection to github.com:443<br>
        代理结点问题，换个结点试试<br>

Steps:<br>

  1.Edit your code in your our PC;<br>
  2.In the folder of your code,click the right button of your mouse,choose "Git Bash here";<br>
  3.Go to your github account,create a new repository and give it a name;<br>
  4.Now "git init",it will create a folder called ".git" in your folder;<br>
  5."git add folder-A file-B folder-C", the files or folders are seperated with "Spacebar" <br>
  6.You can use "git status" to see the status now as you want;<br>
  7."  git commit -m "what-you-want-to-say-when-you-commit"   ";<br>
  8."git remote add origin https://github.com/Yw-xwx/HNUCryptographySystem",<br>
  here is an example showed the characters you can't see,just modify it.<br>
  9."git push origin master" and wait it succeed.

  
Others:
{
set up the name and email:
    git config --global user.name "username"
    git config --global user.email  useremail@qq.com
assure the name and email:
    git config user.name
    git config user.email
    

    git remote rename origin new_name
    git remote add origin https://github.com/Yw-xwx/Hello-github
    
    git log-----check the history of the repository
    touch .gitignore-----create a file to ignore files in it
        in gitignore,you can just input the name of the file,so it will ignore the file when you commit a lot of files to your github
    

branch:
    git branch BranchName-----create a new branch
    git branch  -----show all your branches
    git checkout BranchName-----go to the new branch
    git checkout -b BranchName-----create a new branch and go to the new branch
    git branch -d BranchName------delete the branch:(-D to delete it very sure)

}
