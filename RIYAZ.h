static int xsuit = 0;
static int xcar = 1;	
static int skinm4 = 1;
static int skinakm = 0;
static int skinscar = 1;
static int skinm7 = 1;
static int skinuzi = 1;
static int skinump45 = 1;
static int skinvector = 1;
static int skinbizon = 1;
static int skingroza = 1;
static int skinkar = 1;
static int skinm24 = 1;
static int skinawm = 1;
static int skindp28 = 1;
static int skinqbz = 0;
static int skinm16a4 = 1;
static int skinm249 = 1;
static int skinmini14 = 1;
static int skinslr = 0;
static int skinsks = 0;
static int skinpan = 0;
static int skinbg = 0;
static int skins1897 = 0;
static int skinvss = 0;
static int skins12k = 0;
static int skinaug = 0;
static int skinmk14 = 1;
static int skinxsuit = 0;
static int skinmyth = 0;
static int skinfool = 0;
static int coupe = 1;
static int Hair11 = 0;
static int skinhmm = 1;
static int UAZ = 1;
static int Daciar = 1;
static int skinm41 = 1;
static int skinscar1 = 0;
static int skinm71 = 0;
static int skinuzi1 = 0;
static int skinump451 = 0;
static int skinvector1 = 0;
static int skinbizon1 = 0;
static int skingroza1 = 0;
static int skinkar1 = 0;
static int skinm241 = 0;
static int skinawm1 = 0;
static int skindp281 = 0;
static int skinqbz1 = 0;
static int skinm16a41 = 0;
static int skinm2491 = 0;
static int skinmini141 = 0;
static int skinslr1 = 0;
static int skinsks1 = 0;
static int skinpan1 = 0;
static int skins18971 = 0;
static int skinvss1 = 0;
static int skins12k1 = 0;
static int skinaug1 = 0;
static int skinmk141 = 0;
static int skinsace32 = 1;
static int Vehicle = 0;
static int skinhelmet = 0;


///main

void* (*oProcessEvent)(UObject* pObj, UFunction* pFunc, void* pArgs);

void* hkProcessEvent(UObject* pObj, UFunction* pFunc, void* pArgs)
{
    const char* EngineHUD = ("Function Engine.HUD.ReceiveDrawHUD");
    if (pFunc)
    {
        if (pFunc->GetFullName() == EngineHUD)
        {
            AHUD* pHUD = (AHUD*)pObj;
            if (pHUD)
            {
                auto Params = (AHUD_ReceiveDrawHUD_Params*)pArgs;
                if (Params)
                {
                    RenderESPPRIVATE(pHUD, Params->SizeX, Params->SizeY);
                }
            }
        }
    }
    



if( std::string(pObj->GetName().c_str()).find("DeadBoxAvatarComponent") != std::string::npos ) {
   UDeadBoxAvatarComponent *DeadBoxPointer = ( UDeadBoxAvatarComponent *) pObj; 
    if( std::string(pFunc->GetFullName().c_str()).find("GetLuaFilePath") != std::string::npos ) {
    uint32_t Key = DeadBoxPointer->IsSelf();              
    auto GWorld = GetWorld();
    if (GWorld){
        if (GWorld->NetDriver->ServerConnection)
            if(GWorld->NetDriver->ServerConnection->PlayerController){
    ASTExtraPlayerController *localController = (ASTExtraPlayerController *)GWorld->NetDriver->ServerConnection->PlayerController;
    ASTExtraPlayerCharacter *localPlayer = (ASTExtraPlayerCharacter *)localController->AcknowledgedPawn;
                if(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated){
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
    if (skinakm == 1)
    DeadBoxPointer->ChangeItemAvatar( 1101001242, true); //Sculpture - AKM
}

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){                  
    if (skinm4 == 1) 
        DeadBoxPointer->ChangeItemAvatar( 1101004046, true); //Glacier - M416 
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "ACE32")){
if (skinace32 == 1) 
DeadBoxPointer->ChangeItemAvatar( 1101102017, true); //
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR-L")){
       if (skinscar == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1101003188, true); //Water Blaster - SCAR-L
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){                  
  if (skinm7 == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1101008081, true); //8-bit Unicorn - M762
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
if (skingroza == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1101005052, true);
    }

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UZI")){

if (skinuzi == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1102001024, true); //Savagery - UZI
  
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){

  if (skinump45 == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1102002136, true);
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vector")){

    if (skinvector == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1102003080, true);
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Thompson")){
if (skinthompson == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1102004034, true); //candy cane
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "PP-19 Bizon")){
if (skinbizon == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1102005041, true);
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Kar98K")){
    if (skinkar == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1103001129, true);
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M24")){
    if (skinm24 == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1103002087, true);
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){
    if (skinawm == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1103003087, true);
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "DP28")){
    if (skindp28 == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1105002035, true);
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M16A4")){
if (skinm16a4 == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1101002081, true);
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "QBZ")){
    if (skinqbz == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1101007046, true);
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M249")){
        if (skinm249== 1) 
    DeadBoxPointer->ChangeItemAvatar( 1105001048, true);
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Mini 14")){
    if (skinmini14 == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1103006046, true);
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SLR")){
    if (skinslr == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1103009037, true);
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SKS")){
    if (skinsks == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1103004037, true);
    }
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vss")){
if (skinvss == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1103005024, true);
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "MK14")){
if (skinmk14 == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1103007028, true);
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S1897")){
    if (skins1897 == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1104002022, true);
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AUG")){
if (skinaug == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1101006062, true);
    }

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S12K")){
if (skins12k == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1104003026, true);
}

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "MG3")){
if (skinmg3 == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1105010008, true);
}

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AMR")){
if (skinamr == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1103012010, true);
}

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "QBZ")){
if (skinqbz == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1103012010, true);
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "DBS")){
if (skindbs == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1103012010, true);
}

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "HONEY")){
if (skinhoney == 1) 
    DeadBoxPointer->ChangeItemAvatar( 1101012009, true);
}

}}}}

return oProcessEvent(pObj, pFunc, pArgs);
}

        const char *pBroadCast = ("Function ShadowTrackerExtra.STExtraPlayerController.BroadcastFatalDamageToClientWithStruct");
    if (pFunc) {
        if (pFunc->GetFullName() == pBroadCast) {
            ASTExtraPlayerController *pController = (ASTExtraPlayerController *) pObj;
            if (pController) {
                auto Params = (ASTExtraPlayerController_BroadcastFatalDamageToClientWithStruct_Params *) pArgs;
                if (Params) {
    auto GWorld = GetWorld();
    if (GWorld){
        if (GWorld->NetDriver->ServerConnection)
            if(GWorld->NetDriver->ServerConnection->PlayerController){
    ASTExtraPlayerController *localController = (ASTExtraPlayerController *)GWorld->NetDriver->ServerConnection->PlayerController;
    ASTExtraPlayerCharacter *localPlayer = (ASTExtraPlayerCharacter *)localController->AcknowledgedPawn;
                if(localController->PlayerKey == Params->FatalDamageParameter.CauserKey && !localController->STExtraBaseCharacter->CurrentVehicle && localPlayer->WeaponManagerComponent->CurrentWeaponReplicated){






if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
    if (skinakm == 1)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001242; //Sculpture - AKM
else    if (skinakm == 2)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001213; //Starsea Admiral - AKM (Lv. 8)
else    if (skinakm == 3)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001068; //Roaring Tiger - AKM
 else   if (skinakm == 4)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001089; //Glacier - AKM
else    if (skinakm == 5)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001101; //Desert Fossil - AKM
 else   if (skinakm == 6)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001116; //Jack-o'-lantern - AKM
  else  if (skinakm == 7)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001128; //Ghillie Dragon - AKM          
   // else if (skinakm == 8)
//    localPlayer->RPC_Client_ChangeRectiftAvatar(EAvatarSlotType::EAvatarSlotType__EAvatarSlotType_ClothesEquipemtSlot , 1101001143 , true); //Gold Pirate - AKM                
    else if (skinakm == 8)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001174;
   else if (skinakm == 9)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001103;
    else if (skinakm == 10)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001023;
}


else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){                  
  //if (skinm4 == 1) 
		////localPlayer->RPC_Client_ChangeRectiftAvatar(EAvatarSlotType::EAvatarSlotType__EAvatarSlotType_ClothesEquipemtSlot , 1101004046 , true);
		
     if (skinm4 == 1) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004062; //The Fool - M416
    else if (skinm4 == 2) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004218; //Lizard Roar - M416
      else if (skinm4 == 3) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004201; //Wanderer - M416
   else if (skinm4 == 4) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004098; //Call of the Wild - M416
        else if (skinm4 == 5) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004163; //Imperial Splendor - M416
        else if (skinm4 == 6) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004201; //Silver Guru - M416
        else if (skinm4 == 7) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004138; //TechnoCore - M416
        else if (skinm4 == 8) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004209; //TechnoCore - M416
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "ACE32")){
if (skinace32 == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101102017; //
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR-L")){
       if (skinscar == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003188; //Water Blaster - SCAR-L
   else if (skinscar == 2) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003070; //Enchanted Pumpkin - SCAR-L
     else if (skinscar == 3) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003079; //Operation Tomorrow - SCAR-L
     else if (skinscar == 4) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003099; //Drop the Bass - SCAR-L
        else if (skinscar == 5) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003119;
        else if (skinscar == 6) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003146;
        
    
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){                  
  if (skinm7 == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008081; //8-bit Unicorn - M762
   else if (skinm7 == 2) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008116; //Messi Football Icon M762
     else if (skinm7 == 3) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008070; //GACKT MOONSAGA-M762
     else if (skinm7 == 4) 
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008036; //Lotus Fury - M762
        else if (skinm7 == 5)
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008051; //Concerto of Love - M762
        else if (skinm7 == 6)
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008104; //StarCore-M762
        else if (skinm7 == 7)
        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008081; //Stray Rebellion - M762
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
if (skingroza == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005052;
   else if (skingroza == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005052;
else    if (skingroza == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005025; 
else    if (skingroza == 4) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005038; 
    }

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UZI")){

if (skinuzi == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001024; //Savagery - UZI
    if (skinuzi == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001036; //Ethereal Emblem - UZI
    if (skinuzi == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001058; //Romantic Moments - UZI
    if (skinuzi == 4) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001069; //Shimmer Power - UZI
  
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){

  if (skinump45 == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002136;
    if (skinump45 == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002043;
    if (skinump45 == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002061; 
    if (skinump45 == 4) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002070; 
    if (skinump45 == 5) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002030; 
    if (skinump45 == 6) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002090; 
    if (skinump45 == 7) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002136; 
    
  
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vector")){

    if (skinvector == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102003080;
    if (skinvector == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102003031;
    if (skinvector == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102003039; 
    if (skinvector == 4) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102003072; 
    if (skinvector == 5) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102003060; 
  
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Thompson")){
if (skinthompson == 1) 

    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102004034; //candy cane
  
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "PP-19 Bizon")){

if (skinbizon == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102005041;
  else  if (skinbizon == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1102005020;
   
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Kar98K")){

    if (skinkar == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103001129;
else    if (skinkar == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103001079;
  else  if (skinkar == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103001085; 
else    if (skinkar == 4) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103001101;   
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M24")){

    if (skinm24 == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103002087;
else    if (skinm24 == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103002030;
else    if (skinm24 == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103002049; 
 else   if (skinm24 == 4) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103002047; 
 else   if (skinm24 == 5) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103002059; 
   
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){

    if (skinawm == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003087;
else    if (skinawm == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003062;
  else  if (skinawm == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003042; 
 else   if (skinawm == 4) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003062; 
   
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "DP28")){

    if (skindp28 == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1105002035;
 else   if (skindp28 == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1105002035;
    
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M16A4")){
if (skinm16a4 == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002081;
else    if (skinm16a4 == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002056;
  else  if (skinm16a4 == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002068; 
 else   if (skinm16a4 == 4) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002081; 
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "QBZ")){
    if (skinqbz == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101007046;
else    if (skinqbz == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101007036;
else    if (skinqbz == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101007046;
    
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M249")){
        if (skinm249== 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1105001048;
 else   if (skinm249== 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1105001020;
  else  if (skinm249== 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1105001048;
    
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Mini 14")){
    if (skinmini14 == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103006046;
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SLR")){
    if (skinslr == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103009037;
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SKS")){
    if (skinsks == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103004037;
  else  if (skinsks == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103004046;
  else  if (skinsks == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103004058; 
    }
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Pan")){

    if (skinpan == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1108004337;
   else if (skinpan == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1108004145;
 else   if (skinpan == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1108004160; 
    else if (skinpan == 4) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1108004337; 
   else if (skinpan == 5) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1108004283; 
    
  
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vss")){
if (skinvss == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103005024;
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "MK14")){
if (skinmk14 == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103007028;
    }
    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S1897")){
    if (skins1897 == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1104002022;
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AUG")){
if (skinaug == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101006062;
    }

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S12K")){
if (skins12k == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1104003026;
}

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "MG3")){
if (skinmg3 == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1105010008;
}

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AMR")){
if (skinamr == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103012010;
}

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "QBZ")){
if (skinqbz == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103012010;
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "DBS")){
if (skindbs == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103012010;
}

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "HONEY")){
if (skinhoney == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101012009;
}


     }
    }
   }
  }
}
return oProcessEvent(pObj, pFunc, pArgs);
}
        }




//الاسكنات SKINS 




//void *(*oProcessEvent)(UObject *pObj, UFunction *pFunc, void *pArgs);
//void *hkProcessEvent(UObject *pObj, UFunction *pFunc, void *pArgs) {
if (std::string(pFunc->GetFullName().c_str()).find("BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle") != std::string::npos)
{
UBackpackUtils_CreateBattleItemHandle_Params *PARAMS = ( UBackpackUtils_CreateBattleItemHandle_Params * ) pArgs;
std::string strWeaponId = std::to_string((int)PARAMS->DefineID.TypeSpecificID);
//std::string strWeaponId = std::to_string((int)PARAMS->DefineID.TypeSpecificID);
std::string strHelmet = std::to_string((int)PARAMS->DefineID.TypeSpecificID);
std::string strBackPack = std::to_string((int)PARAMS->DefineID.TypeSpecificID);

//==============================================//==============================================//==============================================//==============================================//==============================================



//BackPack
if (strstr(strBackPack.c_str(), "501001")){
if (skinxsuit == 1)
PARAMS->DefineID.TypeSpecificID = 1501001088;
else if (skinxsuit == 2)
PARAMS->DefineID.TypeSpecificID = 1501001174;
else if (skinxsuit == 3)
PARAMS->DefineID.TypeSpecificID = 1501001486;
else if (skinxsuit == 4)
PARAMS->DefineID.TypeSpecificID = 1501001489;
else if (skinxsuit == 5)
PARAMS->DefineID.TypeSpecificID = 1501001157;
else if (skinxsuit == 6)
PARAMS->DefineID.TypeSpecificID = 1501001086;
else if (skinxsuit == 7)
PARAMS->DefineID.TypeSpecificID = 1501001084;
else if (skinxsuit == 8)
PARAMS->DefineID.TypeSpecificID = 1501001174;
}
if (strstr(strBackPack.c_str(), "501002")){
if (skinxsuit == 1)
PARAMS->DefineID.TypeSpecificID = 1501002088;
else if (skinxsuit == 2)
PARAMS->DefineID.TypeSpecificID = 1501002174;
else if (skinxsuit == 3)
PARAMS->DefineID.TypeSpecificID = 1501002486;
else if (skinxsuit == 4)
PARAMS->DefineID.TypeSpecificID = 1501002489;
else if (skinxsuit == 5)
PARAMS->DefineID.TypeSpecificID = 1501002157;
else if (skinxsuit == 6)
PARAMS->DefineID.TypeSpecificID = 1501002086;
else if (skinxsuit == 7)
PARAMS->DefineID.TypeSpecificID = 1501002084;
else if (skinxsuit == 8)
PARAMS->DefineID.TypeSpecificID = 1501002174;
}
if (strstr(strBackPack.c_str(), "501003")){
if (skinxsuit == 1)
PARAMS->DefineID.TypeSpecificID = 1501003088;
else if (skinxsuit == 2)
PARAMS->DefineID.TypeSpecificID = 1501003174;
else if (skinxsuit == 3)
PARAMS->DefineID.TypeSpecificID = 1501003486;
else if (skinxsuit == 4)
PARAMS->DefineID.TypeSpecificID = 1501003489;
else if (skinxsuit == 5)
PARAMS->DefineID.TypeSpecificID = 1501003157;
else if (skinxsuit == 6)
PARAMS->DefineID.TypeSpecificID = 1501003086;
else if (skinxsuit == 7)
PARAMS->DefineID.TypeSpecificID = 1501003084;
else if (skinxsuit == 8)
PARAMS->DefineID.TypeSpecificID = 1501003174;
}

//Helmet
if (strstr(strHelmet.c_str(), "502001")){
if (skinxsuit == 1)
PARAMS->DefineID.TypeSpecificID = 1502001367;
else if (skinxsuit == 2)
PARAMS->DefineID.TypeSpecificID = 1502001014;
else if (skinxsuit == 3)
PARAMS->DefineID.TypeSpecificID = 1502001032;
else if (skinxsuit == 4)
PARAMS->DefineID.TypeSpecificID = 1502001023;
else if (skinxsuit == 5)
PARAMS->DefineID.TypeSpecificID = 1502001190;
else if (skinxsuit == 6)
PARAMS->DefineID.TypeSpecificID = 1502001191;
else if (skinxsuit == 7)
PARAMS->DefineID.TypeSpecificID = 1502001194;
else if (skinxsuit == 8)
PARAMS->DefineID.TypeSpecificID = 1502001014;
}
if (strstr(strHelmet.c_str(), "502002")){
if (skinxsuit == 1)
PARAMS->DefineID.TypeSpecificID = 1502002367;
else if (skinxsuit == 2)
PARAMS->DefineID.TypeSpecificID = 1502002014;
else if (skinxsuit == 3)
PARAMS->DefineID.TypeSpecificID = 1502002032;
else if (skinxsuit == 4)
PARAMS->DefineID.TypeSpecificID = 1502002023;
else if (skinxsuit == 5)
PARAMS->DefineID.TypeSpecificID = 1502002190;
else if (skinxsuit == 6)
PARAMS->DefineID.TypeSpecificID = 1502002191;
else if (skinxsuit == 7)
PARAMS->DefineID.TypeSpecificID = 1502002194;
else if (skinxsuit == 8)
PARAMS->DefineID.TypeSpecificID = 1502002014;
}
if (strstr(strHelmet.c_str(), "502003")){
if (skinxsuit == 1)
PARAMS->DefineID.TypeSpecificID = 1502003367;
else if (skinxsuit == 2)
PARAMS->DefineID.TypeSpecificID = 1502003014;
else if (skinxsuit == 3)
PARAMS->DefineID.TypeSpecificID = 1502003032;
else if (skinxsuit == 4)
PARAMS->DefineID.TypeSpecificID = 1502003023;
else if (skinxsuit == 5)
PARAMS->DefineID.TypeSpecificID = 1502003190;
else if (skinxsuit == 6)
PARAMS->DefineID.TypeSpecificID = 1502003191;
else if (skinxsuit == 7)
PARAMS->DefineID.TypeSpecificID = 1502003194;
else if (skinxsuit == 8)
PARAMS->DefineID.TypeSpecificID = 1502003014;
}


//==============================================//==============================================//==============================================
//            skinns2000        skin

else if (strstr(strWeaponId.c_str(), "104102")){

if (skinns2000 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1104102001; 
}
//            skinfamas        skin

else if (strstr(strWeaponId.c_str(), "101100")){

if (skinfamas == 1) 
        PARAMS->DefineID.TypeSpecificID = 1101100004; 
}
//            Honey Badger        skin

else if (strstr(strWeaponId.c_str(), "101012")){

if (skinhoney == 1) 
        PARAMS->DefineID.TypeSpecificID = 1101012009; 
}
//            skinqbz        skin

else if (strstr(strWeaponId.c_str(), "101007")){

if (skinqbz == 1) 
        PARAMS->DefineID.TypeSpecificID = 1101007046; 
}
//            skindbs        skin

else if (strstr(strWeaponId.c_str(), "104004")){

if (skindbs == 1) 
        PARAMS->DefineID.TypeSpecificID = 1104004024; 
}
//            skins1897        skin

else if (strstr(strWeaponId.c_str(), "104002")){

if (skins1897 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1104002022; 
}
//            groza        skin

else if (strstr(strWeaponId.c_str(), "101005")){

if (skingroza == 1) 
        PARAMS->DefineID.TypeSpecificID = 1101005052; 
}

//     Thompson    skin

else if (strstr(strWeaponId.c_str(), "102004")){

if (skinthompson == 1) 
        PARAMS->DefineID.TypeSpecificID = 1102004034; //Decisive Day - Thompson (Lv. 8)
}

//     skinpan    skin

else if (strstr(strWeaponId.c_str(), "108004")){

if (skinpan == 1) 
        PARAMS->DefineID.TypeSpecificID = 1108004337; //Decisive Day - Thompson (Lv. 8)
}
//skin   vss
else if (strstr(strWeaponId.c_str(), "103005")){

if (skinvss == 1) 
        PARAMS->DefineID.TypeSpecificID = 1103005024; //Decisive Day - Thompson (Lv. 8)
}

//skin   mk14
else if (strstr(strWeaponId.c_str(), "103007")){

if (skinmk14 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1103007028; //Decisive Day - Thompson (Lv. 8)
}

//skin   mk14
else if (strstr(strWeaponId.c_str(), "104002")){

if (skins1897 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1104002022; //Decisive Day - Thompson (Lv. 8)
}

//skin   aug
else if (strstr(strWeaponId.c_str(), "101006")){

if (skinaug == 1) 
        PARAMS->DefineID.TypeSpecificID = 1101006062; //Decisive Day - Thompson (Lv. 8)
}
//skin   skins12k
else if (strstr(strWeaponId.c_str(), "104003")){

if (skins12k == 1) 
        PARAMS->DefineID.TypeSpecificID = 1104003026; //Decisive Day - Thompson (Lv. 8)
}

//skin   skinmg3
else if (strstr(strWeaponId.c_str(), "105010")){

if (skinmg3 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1105010008; //Decisive Day - Thompson (Lv. 8)
}

//skin   skinamr
else if (strstr(strWeaponId.c_str(), "103012")){

if (skinamr == 1) 
        PARAMS->DefineID.TypeSpecificID = 1103012010; //Decisive Day - Thompson (Lv. 8)
}
//     skinslr    skin

else if (strstr(strWeaponId.c_str(), "103009")){

if (skinslr == 1) 
        PARAMS->DefineID.TypeSpecificID = 1103009037; //Decisive Day - Thompson (Lv. 8)
}
//     skinsks    skin

else if (strstr(strWeaponId.c_str(), "103004")){

if (skinsks == 1) 
        PARAMS->DefineID.TypeSpecificID = 1103004037; //Decisive Day - Thompson (Lv. 8)
}

//     Mini14    skin

else if (strstr(strWeaponId.c_str(), "103006")){

if (skinmini14 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1103006046; //Decisive Day - Thompson (Lv. 8)
}

//     M249    skin

else if (strstr(strWeaponId.c_str(), "105001")){

if (skinm249 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1105001048; //Decisive Day - Thompson (Lv. 8)
}

//     qbz    skin

else if (strstr(strWeaponId.c_str(), "101007")){

if (skinqbz == 1) 
        PARAMS->DefineID.TypeSpecificID = 1101007046; //Decisive Day - Thompson (Lv. 8)
}

//     DP28    skin

else if (strstr(strWeaponId.c_str(), "105002")){

if (skindp28 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1105002035; //Decisive Day - Thompson (Lv. 8)
}
//     skinm16a4    skin

else if (strstr(strWeaponId.c_str(), "101002")){

if (skinm16a4 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1101002081; //Decisive Day - Thompson (Lv. 8)
}

//     AWM    skin

else if (strstr(strWeaponId.c_str(), "103003")){

if (skinawm == 1) 
        PARAMS->DefineID.TypeSpecificID = 1103003087; //Decisive Day - AWM (Lv. 8)
}

else if (strstr(strWeaponId.c_str(), "103003")){

if (skinawm == 2) 
        PARAMS->DefineID.TypeSpecificID = 1103003062; //Decisive Day - AWM (Lv. 8)
}

else if (strstr(strWeaponId.c_str(), "103003")){

if (skinawm == 3) 
        PARAMS->DefineID.TypeSpecificID = 1103003042; //Decisive Day - AWM (Lv. 8)
}

//     skinm24

else if (strstr(strWeaponId.c_str(), "103002")){

if (skinm24 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1103002087; //Decisive Day - skinm24 (Lv. 8)
}

else if (strstr(strWeaponId.c_str(), "103002")){

if (skinm24 == 2) 
        PARAMS->DefineID.TypeSpecificID = 1103002030; //Decisive Day - skinm24 (Lv. 8)
}

//     UZI    skin

else if (strstr(strWeaponId.c_str(), "102001")){

if (skinuzi == 1) 
        PARAMS->DefineID.TypeSpecificID = 1102001024; //Decisive Day - UZI (Lv. 8)
}

//     Bizon    skin

else if (strstr(strWeaponId.c_str(), "102005")){

if (skinbizon == 1) 
        PARAMS->DefineID.TypeSpecificID = 1102005041; //Decisive Day - Bizon (Lv. 8)
}

//     kar    skin

else if (strstr(strWeaponId.c_str(), "103001")){

if (skinkar == 1) 
        PARAMS->DefineID.TypeSpecificID = 1103001129; //Decisive Day - kar (Lv. 8)
}

//     vector    skin

else if (strstr(strWeaponId.c_str(), "102003")){

if (skinvector == 1) 
        PARAMS->DefineID.TypeSpecificID = 1102003080; //Decisive Day - vector (Lv. 8)
}

//     ump45    skin

else if (strstr(strWeaponId.c_str(), "102002")){

if (skinump45 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1102002136; //Decisive Day - ump45 (Lv. 8)
}
else if (strstr(strWeaponId.c_str(), "102002")){
if (skinump45 == 2) 
        PARAMS->DefineID.TypeSpecificID = 1102002043; //Decisive Day - ump45 (Lv. 8)
}

//AKMskin

else if (strstr(strWeaponId.c_str(), "101001")){

if (skinakm == 1) 
        PARAMS->DefineID.TypeSpecificID = 1101001242; //Decisive Day - AKM (Lv. 8)
    else if (skinakm == 2) 
        PARAMS->DefineID.TypeSpecificID = 1101001213; //Starsea Admiral - AKM (Lv. 8)
    else if (skinakm == 3) 
        PARAMS->DefineID.TypeSpecificID = 1101001116; //Lizard Roar - AKM
						  else if (skinakm == 4) 
        PARAMS->DefineID.TypeSpecificID = 1101004078; //Wanderer - AKM
   else if (skinakm == 5) 
        PARAMS->DefineID.TypeSpecificID = 1101004098; //Call of the Wild - AKM
        else if (skinakm == 6) 
        PARAMS->DefineID.TypeSpecificID = 1101004163; //Imperial Splendor - AKM
         else if (skinakm == 7) 
        PARAMS->DefineID.TypeSpecificID = 1101004201; //Silver Guru - AKM
        else if (skinakm == 8) 
        PARAMS->DefineID.TypeSpecificID = 1101004138; //TechnoCore - AKM
        else if (skinakm == 9) 
        PARAMS->DefineID.TypeSpecificID = 1101004209; //Tidal Embrace - AKM
        else if (skinakm == 10) 
        PARAMS->DefineID.TypeSpecificID = 1101004218; //Shinobi Kami - AKM
        
}

//        ACE32      skin

else if (strstr(strWeaponId.c_str(), "101102"))
{

if (skinace32 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1101102017; //Decisive Day - ACE32 (Lv. 8)
    else if (skinace32 == 2) 
        PARAMS->DefineID.TypeSpecificID = 1101001213; //Starsea Admiral - ACE32 (Lv. 8)
    else if (skinace32 == 3) 
        PARAMS->DefineID.TypeSpecificID = 1101001116; //Lizard Roar - ACE32
						  else if (skinace32 == 4) 
        PARAMS->DefineID.TypeSpecificID = 1101004078; //Wanderer - ACE32
   else if (skinace32 == 5) 
        PARAMS->DefineID.TypeSpecificID = 1101004098; //Call of the Wild - ACE32
        else if (skinace32 == 6) 
        PARAMS->DefineID.TypeSpecificID = 1101004163; //Imperial Splendor - ACE32
         else if (skinace32 == 7) 
        PARAMS->DefineID.TypeSpecificID = 1101004201; //Silver Guru - ACE32
        else if (skinace32 == 8) 
        PARAMS->DefineID.TypeSpecificID = 1101004138; //TechnoCore - ACE32
        else if (skinace32 == 9) 
        PARAMS->DefineID.TypeSpecificID = 1101004209; //Tidal Embrace - ACE32
        else if (skinace32 == 10) 
        PARAMS->DefineID.TypeSpecificID = 1101004218; //Shinobi Kami - ACE32
        
}

//        m7      skin

else if (strstr(strWeaponId.c_str(), "101008"))
{

if (skinm7 == 1) 
        PARAMS->DefineID.TypeSpecificID = 1101008081; //Decisive Day - m7 (Lv. 8)
    else if (skinm7 == 2) 
        PARAMS->DefineID.TypeSpecificID = 1101001213; //Starsea Admiral - m7 (Lv. 8)
    else if (skinm7 == 3) 
        PARAMS->DefineID.TypeSpecificID = 1101001116; //Lizard Roar - m7
						  else if (skinm7 == 4) 
        PARAMS->DefineID.TypeSpecificID = 1101004078; //Wanderer - m7
   else if (skinm7 == 5) 
        PARAMS->DefineID.TypeSpecificID = 1101004098; //Call of the Wild - m7
        else if (skinm7 == 6) 
        PARAMS->DefineID.TypeSpecificID = 1101004163; //Imperial Splendor - m7
         else if (skinm7 == 7) 
        PARAMS->DefineID.TypeSpecificID = 1101004201; //Silver Guru - m7
        else if (skinm7 == 8) 
        PARAMS->DefineID.TypeSpecificID = 1101004138; //TechnoCore - m7
        else if (skinm7 == 9) 
        PARAMS->DefineID.TypeSpecificID = 1101004209; //Tidal Embrace - m7
        else if (skinm7 == 10) 
        PARAMS->DefineID.TypeSpecificID = 1101004218; //Shinobi Kami - m7
        
}

//        skinscar      skin

else if (strstr(strWeaponId.c_str(), "101003"))
{

if (skinscar == 1) 
        PARAMS->DefineID.TypeSpecificID = 1101003188; //Decisive Day - scar (Lv. 8)
    else if (skinscar == 2) 
        PARAMS->DefineID.TypeSpecificID = 1101001213; //Starsea Admiral - scar (Lv. 8)
    else if (skinscar == 3) 
        PARAMS->DefineID.TypeSpecificID = 1101001116; //Lizard Roar - scar
						  else if (skinscar == 4) 
        PARAMS->DefineID.TypeSpecificID = 1101004078; //Wanderer - scar
   else if (skinscar == 5) 
        PARAMS->DefineID.TypeSpecificID = 1101004098; //Call of the Wild - scar
        else if (skinscar == 6) 
        PARAMS->DefineID.TypeSpecificID = 1101004163; //Imperial Splendor - scar
         else if (skinscar == 7) 
        PARAMS->DefineID.TypeSpecificID = 1101004201; //Silver Guru - scar
        else if (skinscar == 8) 
        PARAMS->DefineID.TypeSpecificID = 1101004138; //TechnoCore - scar
        else if (skinscar == 9) 
        PARAMS->DefineID.TypeSpecificID = 1101004209; //Tidal Embrace - scar
        else if (skinscar == 10) 
        PARAMS->DefineID.TypeSpecificID = 1101004218; //Shinobi Kami - scar
        
}

//m416skin
if (strstr(strWeaponId.c_str(), "101004"))
{

if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1101004046; //Glacier - M416 

                            else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1101004062; //The Fool - M416
                           else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1101004086; //Lizard Roar - M416
						   else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1101004078; //Wanderer - M416
                          else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1101004098; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1101004163; //Imperial Splendor - M416
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1101004201; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1101004138; //TechnoCore - M416
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1101004209; //Tidal Embrace - M416
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1101004218; //Shinobi Kami - M416
                            
}

if (strstr(strWeaponId.c_str(), "205002"))// Config.M416_Tactical_stock
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040463; //Glacier - M416 
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040623; //The Fool - M416
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040863; //Lizard Roar - M416
						  else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040783; //Wanderer - M416
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040983; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041633; //Imperial Splendor - M416
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042013; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041383; //TechnoCore - M416
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042093; //Tidal Embrace - M416
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1010042183; //Shinobi Kami - M416
                            
}


if (strstr(strWeaponId.c_str(), "205005"))// M416_default_stock
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040463; //Glacier - M416 
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040623; //The Fool - M416
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040863; //Lizard Roar - M416
						  else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040783; //Wanderer - M416
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040983; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041633; //Imperial Splendor - M416
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042013; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041383; //TechnoCore - M416
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042093; //Tidal Embrace - M416
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1010042183; //Shinobi Kami - M416
                            
}

if (strstr(strWeaponId.c_str(), "203008"))// M416_Mechanical_Sights
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040462; //Glacier - M416 
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040622; //The Fool - M416
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040862; //Lizard Roar - M416
						  else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040782; //Wanderer - M416
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040982; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041632; //Imperial Splendor - M416
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042012; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041382; //TechnoCore - M416
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042092; //Tidal Embrace - M416
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1010042182; //Shinobi Kami - M416
                            
}

if (strstr(strWeaponId.c_str(), "291004"))// M416_default_Magazine
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040461; //Glacier - M416 
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040621; //The Fool - M416
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040861; //Lizard Roar - M416
						  else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040781; //Wanderer - M416
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040981; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041631; //Imperial Splendor - M416
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042011; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041381; //TechnoCore - M416
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042091; //Tidal Embrace - M416
                            else if (skinm4 == 10) 
     
	
PARAMS->DefineID.TypeSpecificID = 1010042181; //Shinobi Kami - M416
}



}
return oProcessEvent(pObj, pFunc, pArgs);
}



void *(*oProcessEvent)(UObject *pObj, UFunction *pFunc, void *pArgs);
void *hkProcessEvent(UObject *pObj, UFunction *pFunc, void *pArgs) {
	
		//=============== k I L L    M E S S =================//
        const char *pBroadCast = ("Function ShadowTrackerExtra.STExtraPlayerController.BroadcastFatalDamageToClientWithStruct");
        if (pFunc) {
        if (pFunc->GetFullName() == pBroadCast) {
            ASTExtraPlayerController *pController = (ASTExtraPlayerController *) pObj;
            if (pController) {
                auto Params = (ASTExtraPlayerController_BroadcastFatalDamageToClientWithStruct_Params *) pArgs;
                if (Params) {
             auto GWorld = GetWorld();
         if (GWorld){
                  if (GWorld->NetDriver->ServerConnection)
                 if(GWorld->NetDriver->ServerConnection->PlayerController){
                ASTExtraPlayerController *localController = (ASTExtraPlayerController *)GWorld->NetDriver->ServerConnection->PlayerController;
                   ASTExtraPlayerCharacter *localPlayer = (ASTExtraPlayerCharacter *)localController->AcknowledgedPawn;
                   if(localController->PlayerKey == Params->FatalDamageParameter.CauserKey && !localController->STExtraBaseCharacter->CurrentVehicle && localPlayer->WeaponManagerComponent->CurrentWeaponReplicated){
                     //Params->FatalDamageParameter.CauserClothAvatarID =  1406152;////Avalanche 
					if (skinxsuit == 1)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1405909;//This Code Make By Kong @SRC_HUB //blood raven x suit
                    if (skinxsuit == 2)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1405628;//This Code Make By Kong @SRC_HUB //Golden Pharaoh X-Suit
                    if (skinxsuit == 3)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1406152;//This Code Make By Kong @SRC_HUB //Avalanche
                    if (skinxsuit == 4)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1406475;//This Code Make By Kong @SRC_HUB //Irresidence
                    if (skinxsuit == 5)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1405983;//This Code Make By Kong @SRC_HUB //Poseidon
                    if (skinxsuit == 6)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1406638;//This Code Make By Kong @SRC_HUB //Arcane Jester X-suit
                    if (skinxsuit == 7)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1406311;//This Code Make By Kong @SRC_HUB //Silvanus X-Suit
                    if (skinxsuit == 8)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1406971;//This Code Make By Kong @SRC_HUB //Mermaid depths X-Suit                 
					if (skinxsuit == 9)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1407103;//This Code Make By Kong @SRC_HUB //Mermaid depths X-Suit                 
                    if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){                    
              //      Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001242;
					if (skinakm == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001242, true; //Decisive Day - AKM (Lv. 8) 
else if (skinakm == 2) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001213, true; //Starsea Admiral - AKM (Lv. 8) 
}            
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){                  
                   // Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004046; TechnoCore - M416
				  			   
				   
				                   if (skinm4 == 1) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004046;// //Glacier - M416 
                       else if (skinm4 == 2) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004062;////The Fool - M416
                        else if (skinm4 == 3) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004086;////Lizard Roar - M416
                          else if (skinm4 == 4) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004218;// //Wanderer - M416
                       else if (skinm4 == 5) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004098;////Call of the Wild - M416
                            else if (skinm4 == 6) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004163;////Imperial Splendor - M416
                            else if (skinm4 == 7) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004201;///Silver Guru - M416
                            else if (skinm4 == 8) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004138;///TechnoCore - M416
                            else if (skinm4 == 9) 
                     Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004209; //Tidal Embrace - M416
					    else if (skinm4 == 10) 
						Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004218; //Shinobi Kami - M416
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR-L")){  
					if (skinscar == 1) 
                    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003188; //Bloodstained Nemesis - SCAR-L (Lv. 8)              
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){   
					if (skinm7 == 1) 
                    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008081;//Stray Rebellion - M76
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
					if (skingroza == 1) 	
                    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005082;
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){
				    if (skinawm == 1) 	
                    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003087;
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "DP28")){
		            if (skindp28 == 1) 
                    Params->FatalDamageParameter.CauserWeaponAvatarID = 1105002063;
					}
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "ACE32")){
					 if (skinsace32 == 1) 	
                    Params->FatalDamageParameter.CauserWeaponAvatarID = 1101102007;
					}
					else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Mk14")){
				    if (skinmk14 == 1) 	
                    Params->FatalDamageParameter.CauserWeaponAvatarID = 1103007028;
                   
         
}}}}}}
return oProcessEvent(pObj, pFunc, pArgs);
}
}

if( std::string(pObj->GetName().c_str()).find("DeadBoxAvatarComponent") != std::string::npos ) {
   UDeadBoxAvatarComponent *DeadBoxPointer = ( UDeadBoxAvatarComponent *) pObj; 
    if( std::string(pFunc->GetFullName().c_str()).find("GetLuaFilePath") != std::string::npos ) {
    uint32_t Key = DeadBoxPointer->IsSelf();              
    auto GWorld = GetWorld();
    if (GWorld){
        if (GWorld->NetDriver->ServerConnection)
            if(GWorld->NetDriver->ServerConnection->PlayerController){
    ASTExtraPlayerController *localController = (ASTExtraPlayerController *)GWorld->NetDriver->ServerConnection->PlayerController;
    ASTExtraPlayerCharacter *localPlayer = (ASTExtraPlayerCharacter *)localController->AcknowledgedPawn;
                if(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated){
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){
//DeadBoxPointer->ChangeItemAvatar(1101004046, true); //Glacier - M416 
	
if (skinm4 == 1) 
DeadBoxPointer->ChangeItemAvatar(1101004046, true); //Glacier - M416 

else if (skinm4 == 2) 
DeadBoxPointer->ChangeItemAvatar(1101004062, true); //The Fool - M416
else if (skinm4 == 3) 
DeadBoxPointer->ChangeItemAvatar(1101004086, true); //Lizard Roar - M416
else if (skinm4 == 4) 
DeadBoxPointer->ChangeItemAvatar(1101004218, true); //Wanderer - M416
else if (skinm4 == 5) 
DeadBoxPointer->ChangeItemAvatar(1101004098, true); //Call of the Wild - M416
else if (skinm4 == 6) 
DeadBoxPointer->ChangeItemAvatar(1101004163, true); //Imperial Splendor - M416
else if (skinm4 == 7) 
DeadBoxPointer->ChangeItemAvatar(1101004201, true); //Silver Guru - M416
else if (skinm4 == 8) 
DeadBoxPointer->ChangeItemAvatar(1101004138, true); //TechnoCore - M416
else if (skinm4 == 9) 
DeadBoxPointer->ChangeItemAvatar(1101004209, true); //Tidal - M416
else if (skinm4 == 10)
DeadBoxPointer->ChangeItemAvatar(1101004218, true); //Shinobi Kami - M416
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
if (skinakm == 1) 
DeadBoxPointer->ChangeItemAvatar(1101001242, true); //Decisive Day  - AKM (Lv. 8) 
else if (skinakm == 2) 
DeadBoxPointer->ChangeItemAvatar(1101001213, true); //Starsea Admiral - AKM (Lv. 8) 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR-L")){
if (skinscar == 1) 	
DeadBoxPointer->ChangeItemAvatar(1101003188, true); //Bloodstained Nemesis - SCAR-L (Lv. 8) 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){
if (skinm7 == 1) 	
DeadBoxPointer->ChangeItemAvatar(1101008081, true); //Starcore - M762 (Lv. 8) 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
if (skingroza == 1) 		
DeadBoxPointer->ChangeItemAvatar(1101005082, true); //Pumpkin Carol - Groza (Lv. 5) 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){
DeadBoxPointer->ChangeItemAvatar(1102002136, true);//Cryofrost Shard - UMP45 (Lv. 7) 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AUG")){
DeadBoxPointer->ChangeItemAvatar(1101006062, true); //Forsaken Glace - AUG (Lv. 8) 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Mk14")){
if (skinmk14 == 1) 		
DeadBoxPointer->ChangeItemAvatar(1103007028, true); //Drakreign - Mk14 (Lv. 8) 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){
 if (skinawm == 1) 		
DeadBoxPointer->ChangeItemAvatar(1103003087, true); // Serpengleam - AWM (Lv. 7) 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "ACE32")){
if (skinsace32 == 1) 		
DeadBoxPointer->ChangeItemAvatar(1101102017, true); // ACE32 - AWM (Lv. 7) 
}}}}}
return oProcessEvent(pObj, pFunc, pArgs);
}
if (std::string(pFunc->GetFullName().c_str()).find("BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle") != std::string::npos)
{
UBackpackUtils_CreateBattleItemHandle_Params *PARAMS = ( UBackpackUtils_CreateBattleItemHandle_Params * ) pArgs;
std::string strWeaponId = std::to_string((int)PARAMS->DefineID.TypeSpecificID);

if (strstr(strWeaponId.c_str(), "101004")){
PARAMS->DefineID.TypeSpecificID = 1101004040;
PARAMS->DefineID.TypeSpecificID = 1101004041;
PARAMS->DefineID.TypeSpecificID = 1101004042;
PARAMS->DefineID.TypeSpecificID = 1101004043;
PARAMS->DefineID.TypeSpecificID = 1101004044;
PARAMS->DefineID.TypeSpecificID = 1101004045;
PARAMS->DefineID.TypeSpecificID = 1101004046;
}

	

	
if (strstr(strWeaponId.c_str(), "501001"))
{
PARAMS->DefineID.TypeSpecificID = 1501001174;
}
if (strstr(strWeaponId.c_str(), "501002"))
{
PARAMS->DefineID.TypeSpecificID = 1501002174;
}
if (strstr(strWeaponId.c_str(), "501003"))
{
PARAMS->DefineID.TypeSpecificID = 1501003174;
}
if (strstr(strWeaponId.c_str(), "501004"))
{
PARAMS->DefineID.TypeSpecificID = 1501002174;
}
if (strstr(strWeaponId.c_str(), "501005"))
{
PARAMS->DefineID.TypeSpecificID = 1501003174;
}
if (strstr(strWeaponId.c_str(), "501006"))
{
PARAMS->DefineID.TypeSpecificID = 1501003174;
}				 
					 
					 



if (strstr(strWeaponId.c_str(), "101004"))
{
                           if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1101004046; //Glacier - M416 
                            else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1101004062; //The Fool - M416
                           else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1101004086; //Lizard Roar - M416
						   else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1101004078; //Wanderer - M416
                          else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1101004098; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1101004163; //Imperial Splendor - M416
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1101004201; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1101004138; //TechnoCore - M416
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1101004209; //Tidal Embrace - M416
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1101004218; //Shinobi Kami - M416
                            
}

if (strstr(strWeaponId.c_str(), "205002"))// Config.M416_Tactical_stock
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040463; //Glacier - M416 
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040623; //The Fool - M416
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040863; //Lizard Roar - M416
						  else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040783; //Wanderer - M416
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040983; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041633; //Imperial Splendor - M416
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042013; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041383; //TechnoCore - M416
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042093; //Tidal Embrace - M416
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1010042183; //Shinobi Kami - M416
                            
}


if (strstr(strWeaponId.c_str(), "205005"))// M416_default_stock
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040463; //Glacier - M416 
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040623; //The Fool - M416
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040863; //Lizard Roar - M416
						  else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040783; //Wanderer - M416
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040983; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041633; //Imperial Splendor - M416
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042013; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041383; //TechnoCore - M416
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042093; //Tidal Embrace - M416
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1010042183; //Shinobi Kami - M416
                            
}

if (strstr(strWeaponId.c_str(), "203008"))// M416_Mechanical_Sights
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040462; //Glacier - M416 
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040622; //The Fool - M416
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040862; //Lizard Roar - M416
						  else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040782; //Wanderer - M416
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040982; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041632; //Imperial Splendor - M416
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042012; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041382; //TechnoCore - M416
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042092; //Tidal Embrace - M416
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1010042182; //Shinobi Kami - M416
                            
}

if (strstr(strWeaponId.c_str(), "291004"))// M416_default_Magazine
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040461; //Glacier - M416 
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040621; //The Fool - M416
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040861; //Lizard Roar - M416
						  else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040781; //Wanderer - M416
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040981; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041631; //Imperial Splendor - M416
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042011; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041381; //TechnoCore - M416
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042091; //Tidal Embrace - M416
                            else if (skinm4 == 10) 
     
	
PARAMS->DefineID.TypeSpecificID = 1010042181; //Shinobi Kami - M416
}
if (strstr(strWeaponId.c_str(), "101008"))// M762
{
if (skinm7 == 1) 
PARAMS->DefineID.TypeSpecificID = 1101008081; //M762   
}
if (strstr(strWeaponId.c_str(), "101003"))// Bloodstained Nemesis - SCAR-L (Lv. 8) 
{
if (skinscar == 1) 
PARAMS->DefineID.TypeSpecificID = 1101003188; //Bloodstained Nemesis - SCAR-L (Lv. 8)    
}
if (strstr(strWeaponId.c_str(), "103003"))// Bloodstained Nemesis - SCAR-L (Lv. 8) 
{
if (skinawm == 1) 
PARAMS->DefineID.TypeSpecificID = 1103003087; //Bloodstained Nemesis - SCAR-L (Lv. 8)    
}
if (strstr(strWeaponId.c_str(), "101102"))// Bloodstained Nemesis - SCAR-L (Lv. 8) 
{
if (skinsace32 == 1) 
PARAMS->DefineID.TypeSpecificID = 1101102017; //Bloodstained Nemesis - SCAR-L (Lv. 8)    
}

if (strstr(strWeaponId.c_str(), "703001"))// PARACHUTE
{
             if (skinxsuit == 1)
					    PARAMS->DefineID.TypeSpecificID = 1401621;//
            else if (skinxsuit == 2)
					    PARAMS->DefineID.TypeSpecificID = 1401619;//  
            else if (skinxsuit == 5)
					    PARAMS->DefineID.TypeSpecificID = 1401624;//
					 }
//Akm 
if (strstr(strWeaponId.c_str(), "101001")){
if (skinakm == 1)
PARAMS->DefineID.TypeSpecificID = 1101001242;
else if (skinakm == 2)
PARAMS->DefineID.TypeSpecificID = 1101001213;
}
if (strstr(strWeaponId.c_str(), "291001"))// AKM_default_Magazine
{
if (skinakm == 1) 
PARAMS->DefineID.TypeSpecificID = 1101001242;
else if (skinakm == 2) 
PARAMS->DefineID.TypeSpecificID = 1101001213;
}
return oProcessEvent(pObj, pFunc, pArgs);
}




    const char *EngineHUD = ("Function Engine.HUD.ReceiveDrawHUD");
    if (pFunc) {
        if (pFunc->GetFullName() == EngineHUD) {
            AHUD *pHUD = (AHUD *) pObj;
            if (pHUD) {
                auto Params = (AHUD_ReceiveDrawHUD_Params *) pArgs;
                if (Params) {
                    RenderESPPRIVATE(pHUD, Params->SizeX, Params->SizeY);
                }
            }
        }
    }
    return oProcessEvent(pObj, pFunc, pArgs);
}

void initOffset() {
    ProcessEvent = (Cheat::libUE4Base + 0x4945e34);
    if (ProcessEvent) {
   Tools::Hook((void *) (ProcessEvent), (void *) hkProcessEvent,(void **) &oProcessEvent);
    }
    }



initOffset();