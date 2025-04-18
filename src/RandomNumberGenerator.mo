model RandomNumberGenerator
  function getRandomNum
    output Integer randomNumber "Return random number of runRandomNum()";
    external "C" randomNumber = getRandomNumCFunction()
    annotation(
              Library="curl",
              IncludeDirectory="modelica://RandomNumberGenerator",
              Include="#include \"external\getRandomNum.c\"");
  end getRandomNum;
  initial equation
    getRandomNum();
end RandomNumberGenerator; 