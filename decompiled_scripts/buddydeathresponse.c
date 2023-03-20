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
	if (unk_0x524AF15206846700(2) || unk_0x03CB9849EEA4B7BA())
	{
		unk_0x7C3AA2D27E16E2AD();
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
	if (!unk_0xE4F7206742848BAF(iLocal_20))
	{
		if (!Global_88106)
		{
			unk_0xAF3355298F537BB0(iLocal_20, 1, 1);
			if (unk_0x810AFFABCBF31E2D(iLocal_20, 1435919172) != 7)
			{
				unk_0xF156AA2A744B309E(iLocal_20);
			}
			Var0 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0) };
			unk_0xA8ED9F72DC442242(iLocal_20, 1);
			unk_0x33A0CEA494F4C2A3(&uVar3);
			if (!unk_0x9A4E2270C2271219(iLocal_20, 0))
			{
				if (!unk_0x55AE67E25C3C8024(iLocal_20, 0) && !unk_0x9A4E2270C2271219(iLocal_20, 0))
				{
					unk_0x7ACF885D02B287A3(0, Var0, 6000);
				}
			}
			unk_0x398367D1AEB7ED62(0, Var0, 6000, 0, 2);
			unk_0x33F83FC0F5F458E3(uVar3);
			unk_0x8B8674266D533E9F(iLocal_20, uVar3);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x3934E959DB2478D3())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xD2CFFE76B625AE55(iLocal_20))
	{
		if (!unk_0xE4F7206742848BAF(iLocal_20))
		{
			unk_0x94DC76C688E7D222(iLocal_20, 1);
		}
		unk_0x7E8F7C1D05860F53(&iLocal_20);
	}
	Global_88106 = 0;
	unk_0x7C3AA2D27E16E2AD();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA0F74982C6AAA9D4() + 1000;
	while (unk_0xA0F74982C6AAA9D4() < iVar0 && !unk_0x3934E959DB2478D3())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xE4F7206742848BAF(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0x27D769C59BC9D030()))
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
			switch (func_5(unk_0x27D769C59BC9D030()))
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
			switch (func_5(unk_0x27D769C59BC9D030()))
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
	unk_0x1D6AFE0F8AC2F140(uParam0, sParam1, sParam2, func_4(iParam3), 0);
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
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
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
		return Global_101154.f_32575[iParam0 /*29*/];
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
		if (unk_0xD2CFFE76B625AE55(Global_88980[iLocal_18]) && !unk_0xE4F7206742848BAF(Global_88980[iLocal_18]))
		{
			if (Global_88980[iLocal_18] != unk_0x27D769C59BC9D030())
			{
				if (!unk_0xE24B37600DCB21FC(Global_88980[iLocal_18]))
				{
					if (unk_0x9A4E2270C2271219(Global_88980[iLocal_18], 0) || !unk_0xBF99E4112970270F(Global_88980[iLocal_18]))
					{
						if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(Global_88980[iLocal_18], 1), unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_88980[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (unk_0xDE7DE56F6FF55B6A(Global_88980[iLocal_18], unk_0x27D769C59BC9D030(), 17))
									{
										if (unk_0x9A4E2270C2271219(Global_88980[iLocal_18], 0))
										{
											iVar0 = unk_0xD9FFE8E1642C81E2(Global_88980[iLocal_18], 0);
										}
										if ((unk_0xD2CFFE76B625AE55(iVar0) && unk_0x0B4DDB992C7BCF57(iVar0, 0)) || !unk_0xD2CFFE76B625AE55(iVar0))
										{
											*uParam0 = Global_88980[iLocal_18];
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
	if (unk_0x3934E959DB2478D3())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_10()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_6(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_5(unk_0x27D769C59BC9D030());
			if (func_7(iVar0) && (!func_11(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_7(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_11(int iParam0)
{
	return Global_35711 == iParam0;
}

