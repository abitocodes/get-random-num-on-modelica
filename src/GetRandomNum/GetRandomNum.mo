package GetRandomNum
  function runRandomNum
    output Integer randomNumber "Return random number of runRandomNum()";
    external "C" randomNumber = getRandomNumCFunction()
    annotation( 
               Library="curl",
               IncludeDirectory="modelica://GetRandomNum/source",
               Include="#include \"getRandomNum.c\"");
  end runRandomNum;
end GetRandomNum;