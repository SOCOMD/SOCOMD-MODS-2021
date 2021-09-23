import os

path_parent = os.path.dirname(os.getcwd())

for subdir, dirs, files in os.walk(path_parent + "\\addons"):
    for direc in dirs:
        curDir =  os.path.join(subdir, direc)
        if direc == "functions":
            curSubDir = subdir
            output = ""
            print("checking: " + curDir)
            for subdir, dirs, files in os.walk(curDir):
                for file in files:
                    if file.endswith(".sqf"):
                        with open(os.path.join(curDir, file),'r') as f:
                            if not '#include "script_component.hpp"' in f.read():
                                with open(os.path.join(curDir, file), 'r') as original: data = original.read()
                                with open(os.path.join(curDir, file), 'w') as modified: modified.write('#include "script_component.hpp"\n' + data)
                        if file[:3] == "fn_":
                            newFileName = "fnc_"+ file[3:]
                            if not os.path.isfile(os.path.join(curDir, newFileName)):
                                print("renaming: " + file + " -> " +newFileName)
                                os.rename(os.path.join(curDir, file),os.path.join(curDir, newFileName))
                                file = newFileName
                            else :
                                print(os.path.join(curDir, newFileName) + " already exists, skipping")
                        print(file)

                        functionFile = file[4:-4]
                        prepText = "PREP(" + functionFile + ");\n"
                        output = output + prepText
                print(output)
                
                if not os.path.isfile(os.path.join(curDir,"script_component.hpp")):
                    path =  os.path.dirname(curDir)
                    pathName = os.path.basename(os.path.dirname(curDir))
                    scriptFile = open(os.path.join(curDir,"script_component.hpp"),"x")
                    scriptFile = open(os.path.join(curDir,"script_component.hpp"),"w")
                    scriptFile.write('#include "\\z\\socomd\\addons\\'+pathName+'\\script_component.hpp"')
                if not os.path.isfile(os.path.join(curSubDir,"XEH_PREP.hpp")):
                    prepFile = open(os.path.join(curSubDir,"XEH_PREP.hpp"),"x")
                prepFile = open(os.path.join(curSubDir,"XEH_PREP.hpp"),"w") 
                prepFile.write(output)
                prepFile.close()
        if direc == "configs":
            print(direc)
            print(subdir)
            currentDir = subdir
            full_path = os.path.join(subdir,direc)
            print(full_path)
            for subdir, dirs, files in os.walk(curDir):
                for file in files:
                    # print( os.path.join(full_path,subdir, file))
                    f = open(os.path.join(full_path,subdir, file), 'r')
                    if not '#include "'+currentDir[2:]+'\\script_component.hpp"' in f.read():
                        with open(os.path.join(full_path,subdir, file), 'r') as original: data = original.read()
                        with open(os.path.join(full_path,subdir, file), 'w') as modified: modified.write('#include "'+currentDir[2:]+'\\script_component.hpp"\n' + data)
            