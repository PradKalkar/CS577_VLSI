# Instructions to code

## Pull the latest changes, create a new branch named local and switch to it
1. On master branch: ```git pull origin master```
2. ```git branch local```
3. ```git checkout local```
--

Code on **local** branch until you get results which you want to store as a checkpoint
--

## Stash the changes, update master and apply them over it
1. ```git stash```
2. ```git checkout master```
3. ```git pull origin master```
4. ```git stash list```
5. ```git stash apply stash@{0}```

## Resolution of merge conflicts, commit and push the commits to remote repo 
1. Resolve merge conflicts (if any)
2. ```git add .```
3. ```git commit -m "time \<time_value\>"```
   ```git commit -m "area \<area_bram\> \<area_ff\> \<area_lut\>"```
   Note: At this stage, copy the command to cur/log.txt of time/area folder (whichever applicable) so that we have a track of it in the future. Similarly, any update to the opt folder needs to be logged in opt/log.txt.
4. ```git push origin master```

## Delete local branch, clear stash and update master
1. ```git branch -d local```
2. ```git stash drop stash@{0}```
3. ```git pull origin master```