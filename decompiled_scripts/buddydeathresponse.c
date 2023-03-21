#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	if (unk_0x76BF814AB8D4CAB8(2) || unk_0x9C82FB9961CCF579())
	{
		unk_0x810C5D6462DD69E6();
	}
	func_1();
}

void func_1()
{
	struct<3> Var0;
	var uVar3;
	
	while (!func_8(&iLocal_20))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x0FAE113CE72ED842(iLocal_20))
	{
		if (!Global_89469)
		{
			unk_0x337F2213526139E0(iLocal_20, 1, 1);
			if (unk_0x2BBAA45ECDE3DAE2(iLocal_20, 1435919172) != 7)
			{
				unk_0x267F7A2DFDFFB077(iLocal_20);
			}
			Var0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0) };
			unk_0x40E2910BAF39B1C7(iLocal_20, 1);
			unk_0xC8BEB049F3BFC0AB(&uVar3);
			if (!unk_0x657B649BA2AD3582(iLocal_20, 0))
			{
				if (!unk_0x8E6B1A41766B5731(iLocal_20, 0) && !unk_0x657B649BA2AD3582(iLocal_20, 0))
				{
					unk_0xE4536F74EAB52EE1(0, Var0, 6000);
				}
			}
			unk_0x13C89D4679DD9966(0, Var0, 6000, 0, 2);
			unk_0xAFDA7B8F83B2CA58(uVar3);
			unk_0x73F69DD57B7E92A9(iLocal_20, uVar3);
		}
		func_2(iLocal_20);
	}
	while (!unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x31F12808DC47A9E5(iLocal_20))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_20))
		{
			unk_0x10F31830C95ED2E5(iLocal_20, 1);
		}
		unk_0xDBE64C5761554FBF(&iLocal_20);
	}
	Global_89469 = 0;
	unk_0x810C5D6462DD69E6();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x5AFB8ED811F05E4D() + 1000;
	while (unk_0x5AFB8ED811F05E4D() < iVar0 && !unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x0FAE113CE72ED842(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0x18F7BE9ACB7D08F4()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0x18F7BE9ACB7D08F4()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0x18F7BE9ACB7D08F4()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x40033E3EAE3C63BB(uParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_7(int iParam0)
{
	return iParam0 < 3;
}

int func_8(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90343[iLocal_18]) && !unk_0x0FAE113CE72ED842(Global_90343[iLocal_18]))
		{
			if (Global_90343[iLocal_18] != unk_0x18F7BE9ACB7D08F4())
			{
				if (!unk_0x90D1FDC9D31B7BE1(Global_90343[iLocal_18]))
				{
					if (unk_0x657B649BA2AD3582(Global_90343[iLocal_18], 0) || !unk_0x4A296E47F281D02F(Global_90343[iLocal_18]))
					{
						if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(Global_90343[iLocal_18], 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_90343[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (unk_0xAAB9BF2904B9E7CE(Global_90343[iLocal_18], unk_0x18F7BE9ACB7D08F4(), 17))
									{
										if (unk_0x657B649BA2AD3582(Global_90343[iLocal_18], 0))
										{
											iVar0 = unk_0x5AD687C3474F04B4(Global_90343[iLocal_18], 0);
										}
										if ((unk_0x31F12808DC47A9E5(iVar0) && unk_0xC4B84EB67F78C1F0(iVar0, 0)) || !unk_0x31F12808DC47A9E5(iVar0))
										{
											*uParam0 = Global_90343[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_10()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_6(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_5(unk_0x18F7BE9ACB7D08F4());
			if (func_7(iVar0) && (!func_11(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_7(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_11(int iParam0)
{
	return Global_35859 == iParam0;
}

