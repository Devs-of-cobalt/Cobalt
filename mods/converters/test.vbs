Const ForReading = 1
Const ForWriting = 2

Set objFSO = CreateObject("Scripting.FileSystemObject")
Set objFile = objFSO.OpenTextFile("C:\Users\Hihi\Documents\mod2jar\mods\converters\test.txt", ForReading)

strText = objFile.ReadAll
objFile.Close
strNewText = Replace(strText, "Aron_", "Lori_")
strNewText1 = Replace(strNewText, "Aron", "Jason")
strNewText2 = Replace(strNewText1, "Sketa", "Skicia")

Set objFile = objFSO.OpenTextFile("C:\Users\Hihi\Documents\mod2jar\mods\converters\test.txt", ForWriting)
objFile.WriteLine strNewText2 

objFile.Close