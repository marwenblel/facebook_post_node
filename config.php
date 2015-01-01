<?php
require_once 'fb-sdk/facebook.php';
$config = array(
    'appId'  => '707139372717185',
    'secret' => '8b9fd6be300854eb9901c037bb0f288d',
    'fileUpload' => false, // optional
    'allowSignedRequest' => false, // optional, but should be set to false for non-canvas apps
);
$facebook = new Facebook($config);
$user_id = $facebook->getUser();