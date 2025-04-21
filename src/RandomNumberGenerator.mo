model RandomNumberGenerator
  parameter Real randomNumber(fixed=false);

  function getRandomNum
    output Real randomNumber;
    external "C" randomNumber = getRandomNumCFunction()
    annotation(
              Library="curl",
              IncludeDirectory="modelica://RandomNumberGenerator",
              Include="#include \"external/getRandomNum.c\""); 
  end getRandomNum;

initial equation
  randomNumber = getRandomNum() / 10;

end RandomNumberGenerator;
