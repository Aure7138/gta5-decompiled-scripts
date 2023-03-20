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
	if (unk_0x2C897F101BA20806(2) || unk_0xF7608A9956EAE076())
	{
		unk_0x82706E6C897B0FA1();
	}
	func_1();
}

void func_1()
{
	struct<3> Var0;
	var uVar3;
	
	while (!func_8(&iLocal_19))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_19))
	{
		if (!Global_86942)
		{
			unk_0x7B9576B4E099FB1F(iLocal_19, 1, 1);
			if (unk_0x221AC1EF116F6053(iLocal_19, 1435919172) != 7)
			{
				unk_0x937785D9C1929236(iLocal_19);
			}
			Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
			unk_0x2C4E82CF88213975(iLocal_19, 1);
			unk_0x6D98AA46076A68BE(&uVar3);
			if (!unk_0x202EF5D8203705EF(iLocal_19, 0))
			{
				if (!unk_0x0E9F33AA2B8E5EB6(iLocal_19, 0) && !unk_0x202EF5D8203705EF(iLocal_19, 0))
				{
					unk_0x5BAF25119CA70A04(0, Var0, 6000);
				}
			}
			unk_0x3116CFED02763A5D(0, Var0, 6000, 0, 2);
			unk_0x963BB7C99350D827(uVar3);
			unk_0x0891776D0327B77A(iLocal_19, uVar3);
		}
		func_2(iLocal_19);
	}
	while (!unk_0xF4C685E933068D23())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_19))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_19))
		{
			unk_0x2686393074E14730(iLocal_19, 1);
		}
		unk_0x6B3DDEE91652BE59(&iLocal_19);
	}
	Global_86942 = 0;
	unk_0x82706E6C897B0FA1();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x09560C7DE2A384BD() + 1000;
	while (unk_0x09560C7DE2A384BD() < iVar0 && !unk_0xF4C685E933068D23())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x2DE0B96E966FD817(uParam0))
	{
		if (iLocal_18 == 1)
		{
			switch (func_5(unk_0xA16EC202D9D35357()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_18 == 2)
		{
			switch (func_5(unk_0xA16EC202D9D35357()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_18 == 0)
		{
			switch (func_5(unk_0xA16EC202D9D35357()))
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
	unk_0xB3DDF1AA38C87006(uParam0, sParam1, sParam2, func_4(iParam3), 0);
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
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
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
	
	iLocal_17 = 0;
	while (iLocal_17 < 9)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_87816[iLocal_17]) && !unk_0x2DE0B96E966FD817(Global_87816[iLocal_17]))
		{
			if (Global_87816[iLocal_17] != unk_0xA16EC202D9D35357())
			{
				if (!unk_0x22349EC06EA5B08B(Global_87816[iLocal_17]))
				{
					if (unk_0x202EF5D8203705EF(Global_87816[iLocal_17], 0) || !unk_0x5A6F774C8E17AA21(Global_87816[iLocal_17]))
					{
						if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(Global_87816[iLocal_17], 1), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 1) < 10f)
						{
							iLocal_18 = func_5(Global_87816[iLocal_17]);
							if ((iLocal_18 == 0 || iLocal_18 == 2) || iLocal_18 == 1)
							{
								if (iLocal_18 != func_9())
								{
									if (unk_0xAA23516DE8E2A707(Global_87816[iLocal_17], unk_0xA16EC202D9D35357(), 17))
									{
										if (unk_0x202EF5D8203705EF(Global_87816[iLocal_17], 0))
										{
											iVar0 = unk_0x6ADAC08D70C79DE5(Global_87816[iLocal_17], 0);
										}
										if ((unk_0x538DF9E5B1DF01EB(iVar0) && unk_0xECFECDAD51A6184F(iVar0, 0)) || !unk_0x538DF9E5B1DF01EB(iVar0))
										{
											*uParam0 = Global_87816[iLocal_17];
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
		iLocal_17++;
	}
	if (unk_0xF4C685E933068D23())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_10()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_6(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_5(unk_0xA16EC202D9D35357());
			if (func_7(iVar0) && (!func_11(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_7(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_11(int iParam0)
{
	return Global_34915 == iParam0;
}

