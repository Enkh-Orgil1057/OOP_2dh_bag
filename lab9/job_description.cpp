#include "Job_Description.h"

void JobDescription :: setDescription(string Description)
{
    this->Description = Description;
}

JobDescription :: JobDescription()
{
    Description = "Hooson";
}
JobDescription :: JobDescription(string Description)
{
    setDescription(Description);
}