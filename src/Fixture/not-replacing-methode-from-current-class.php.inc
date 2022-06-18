<?php

class AClass {

    public function run()
    {
        $this->methodFromAClass();
    }
}

?>
-----
<?php

class AClass
{
    public function __construct(
            private AnotherClass $anotherClass
    )
    {
    }

    public function run()
    {
        $this->anotherClass->methodFromAnotherClass();
    }
}

?>