<?xml version="1.0" encoding="UTF-8" ?>
<Package name="Medical Demo Video Version" format_version="4">
    <Manifest src="manifest.xml" />
    <BehaviorDescriptions>
        <BehaviorDescription name="behavior" src="behavior_1" xar="behavior.xar" />
    </BehaviorDescriptions>
    <Dialogs>
        <Dialog name="ExampleDialog" src="behavior_1/MedicalDemo/MedicalDemo.dlg" />
        <Dialog name="MedicalDialog" src="MedicalDialog/MedicalDialog.dlg" />
    </Dialogs>
    <Resources>
        <File name="Talking Tom_ Twinkle Twinkle Little Star" src="Talking Tom_ Twinkle Twinkle Little Star.mp3" />
    </Resources>
    <Topics>
        <Topic name="MedicalDemo" src="behavior_1/MedicalDemo/MedicalDemo.top" topicName="MedicalDemo" language="en_US" />
        <Topic name="ExampleDialog_enu" src="behavior_1/MedicalDemo/ExampleDialog_enu.top" topicName="ExampleDialog" language="en_US" />
        <Topic name="MedicalDialog_enu" src="MedicalDialog/MedicalDialog_enu.top" topicName="MedicalDialog" language="en_US" />
    </Topics>
    <IgnoredPaths>
        <Path src="Review Version.txt" />
    </IgnoredPaths>
</Package>
