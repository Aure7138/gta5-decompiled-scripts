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
	if (unk_0xD4BE58A7E3E102AC(2) || unk_0x6289BEEE8D894625())
	{
		unk_0x9C9E32388A7886A2();
	}
	func_1();
}

void func_1()
{
	struct<3> Var0;
	var uVar3;
	
	while (!func_9(&iLocal_20))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x2BF5E63466422C38(iLocal_20))
	{
		if (!Global_95194)
		{
			unk_0xE5C667CF3B4642D2(iLocal_20, 1, 1);
			if (unk_0x411C065ADB822CD9(iLocal_20, 1435919172) != 7)
			{
				unk_0xC6612209077465DD(iLocal_20);
			}
			Var0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
			unk_0xCC94EE23853F38E4(iLocal_20, 1);
			unk_0xA12E1659DEF57244(&uVar3);
			if (!unk_0x5294582CE404D3F4(iLocal_20, 0))
			{
				if (!unk_0x98E76A2D5D526CF9(iLocal_20, 0) && !unk_0x5294582CE404D3F4(iLocal_20, 0))
				{
					unk_0xD65F7D9CC109BCC8(0, Var0, 6000);
				}
			}
			unk_0x33BF981A2389AF13(0, Var0, 6000, 0, 2);
			unk_0x15A7B753872B3CE3(uVar3);
			unk_0xC544A8E1032AC1CF(iLocal_20, uVar3);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x260395BA7F0C83CB())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xD4B321D9096B01FC(iLocal_20))
	{
		if (!unk_0x2BF5E63466422C38(iLocal_20))
		{
			unk_0x7D81B41B134BD6F2(iLocal_20, 1);
		}
		unk_0x0FFB05DA97E810B5(&iLocal_20);
	}
	Global_95194 = 0;
	unk_0x9C9E32388A7886A2();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9B35D07DCD0F0B43() + 1000;
	while (unk_0x9B35D07DCD0F0B43() < iVar0 && !unk_0x260395BA7F0C83CB())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x2BF5E63466422C38(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0x0FA8183DAD2B3203()))
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
			switch (func_5(unk_0x0FA8183DAD2B3203()))
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
			switch (func_5(unk_0x0FA8183DAD2B3203()))
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
	unk_0x8ED81066343F07B4(uParam0, sParam1, sParam2, func_4(iParam3), 0);
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
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
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
	if (func_8(iParam0))
	{
		return func_7(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_7(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_8(int iParam0)
{
	return iParam0 < 3;
}

int func_9(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0xD4B321D9096B01FC(Global_96068[iLocal_18]) && !unk_0x2BF5E63466422C38(Global_96068[iLocal_18]))
		{
			if (Global_96068[iLocal_18] != unk_0x0FA8183DAD2B3203())
			{
				if (!unk_0x00123AB82C5FAC28(Global_96068[iLocal_18]))
				{
					if (unk_0x5294582CE404D3F4(Global_96068[iLocal_18], 0) || !unk_0xCA7317DE7E0F89E9(Global_96068[iLocal_18]))
					{
						if (unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(Global_96068[iLocal_18], 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_96068[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_10())
								{
									if (unk_0x20510084026BC387(Global_96068[iLocal_18], unk_0x0FA8183DAD2B3203(), 17))
									{
										if (unk_0x5294582CE404D3F4(Global_96068[iLocal_18], 0))
										{
											iVar0 = unk_0x4D57D3E5ECE15A41(Global_96068[iLocal_18], 0);
										}
										if ((unk_0xD4B321D9096B01FC(iVar0) && unk_0xD960230552BC4165(iVar0, 0)) || !unk_0xD4B321D9096B01FC(iVar0))
										{
											*uParam0 = Global_96068[iLocal_18];
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
	if (unk_0x260395BA7F0C83CB())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_6(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_5(unk_0x0FA8183DAD2B3203());
			if (func_8(iVar0) && (!func_12(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_8(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_12(int iParam0)
{
	return Global_41396 == iParam0;
}

