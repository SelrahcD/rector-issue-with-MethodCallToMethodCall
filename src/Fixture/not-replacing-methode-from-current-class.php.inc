<?php

namespace SelrahcD\RectorIssueWithMethodCallToMethodCall;

class AClass {

    public function run()
    {
        $this->methodFromAClass();
    }

    public function methodFromAClass()
    {
    }
}

?>
-----
<?php

namespace SelrahcD\RectorIssueWithMethodCallToMethodCall;

class AClass
{
    public function __construct(
            private Charles\RectorIssueWithMethodCallToMethodCall\AnotherClass $anotherClass
    )
    {
    }

    public function run()
    {
        $this->anotherClass->methodFromAnotherClass();
    }

    public function methodFromAClass()
    {
    }
}

?>