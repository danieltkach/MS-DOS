1030 GOSUB 2000 'TITLE
1040 GOSUB 3000 'GET DISPLAY TYPE AND SET ADDRESS
1050 GOSUB 2000 'SET THE TITLE AGAIN
1060 GOSUB 4000 'BUILD SURROUNDING COMMENTS
1070 GOSUB 5000 'BUILD DISPLAY ARRAY
1080 GOSUB 6000 'FINISH UP AND RETURN TO DOS

2000 REM Title subroutine
2010 KEY OFF: CLS : WIDTH 80
2020 REM
2030 PRINT "Programs for INSIDE THE IBM PERSONAL COMPUTER"
2999 RETURN

3000 REM Subroutine to inquire about display type
3010 PRINT
3020 PRINT "Before we go any further, is this a color-graphics display?";
3999 RETURN

4000 REM Subroutine to build the surrounding messages
4999 RETURN

5000 REM Subroutine to set the display array
5999 RETURN

6000 LOCATE 25, 1, 1
6999 SYSTEM

9999 REM End of program listing 1-1






