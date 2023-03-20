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
	if (unk_0x8D841F1DD3FA555F(2) || unk_0xAB0A701B9F44F294())
	{
		unk_0xC23A229F78DAD92A();
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
	if (!unk_0x5FEB513A4402FD59(iLocal_19))
	{
		if (!Global_87637)
		{
			unk_0xD768713E73165208(iLocal_19, 1, 1);
			if (unk_0xFA1212DE7C455679(iLocal_19, 1435919172) != 7)
			{
				unk_0x27CC98B7C879C320(iLocal_19);
			}
			Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
			unk_0x1D15D99A10A15334(iLocal_19, 1);
			unk_0xEAD984C2869B8B7C(&uVar3);
			if (!unk_0xE5AB05962FA1FF3F(iLocal_19, 0))
			{
				if (!unk_0xFB9BF178E208C231(iLocal_19, 0) && !unk_0xE5AB05962FA1FF3F(iLocal_19, 0))
				{
					unk_0xBF7CD5D6793CA1E8(0, Var0, 6000);
				}
			}
			unk_0x71D4A7422520E90F(0, Var0, 6000, 0, 2);
			unk_0x56D9ED1541046AF6(uVar3);
			unk_0xC65002CAA1212AF9(iLocal_19, uVar3);
		}
		func_2(iLocal_19);
	}
	while (!unk_0x29AFA2493D7C23D0())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_19))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_19))
		{
			unk_0x6CB332CB31E9FA96(iLocal_19, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_19);
	}
	Global_87637 = 0;
	unk_0xC23A229F78DAD92A();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x48E480685981C7D4() + 1000;
	while (unk_0x48E480685981C7D4() < iVar0 && !unk_0x29AFA2493D7C23D0())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x5FEB513A4402FD59(uParam0))
	{
		if (iLocal_18 == 1)
		{
			switch (func_5(unk_0x81873881071CD9FE()))
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
			switch (func_5(unk_0x81873881071CD9FE()))
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
			switch (func_5(unk_0x81873881071CD9FE()))
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
	unk_0x00641949E82961EF(uParam0, sParam1, sParam2, func_4(iParam3), 0);
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
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
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
		if (unk_0x86CCCD2FAE9D5E65(Global_88511[iLocal_17]) && !unk_0x5FEB513A4402FD59(Global_88511[iLocal_17]))
		{
			if (Global_88511[iLocal_17] != unk_0x81873881071CD9FE())
			{
				if (!unk_0xE86442941AE40E75(Global_88511[iLocal_17]))
				{
					if (unk_0xE5AB05962FA1FF3F(Global_88511[iLocal_17], 0) || !unk_0xCB8B9E751036ECB2(Global_88511[iLocal_17]))
					{
						if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(Global_88511[iLocal_17], 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 1) < 10f)
						{
							iLocal_18 = func_5(Global_88511[iLocal_17]);
							if ((iLocal_18 == 0 || iLocal_18 == 2) || iLocal_18 == 1)
							{
								if (iLocal_18 != func_9())
								{
									if (unk_0xA1AC67F9B7B2E9C4(Global_88511[iLocal_17], unk_0x81873881071CD9FE(), 17))
									{
										if (unk_0xE5AB05962FA1FF3F(Global_88511[iLocal_17], 0))
										{
											iVar0 = unk_0xE68E6B44DABA9C05(Global_88511[iLocal_17], 0);
										}
										if ((unk_0x86CCCD2FAE9D5E65(iVar0) && unk_0x7404950238A154C2(iVar0, 0)) || !unk_0x86CCCD2FAE9D5E65(iVar0))
										{
											*uParam0 = Global_88511[iLocal_17];
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
	if (unk_0x29AFA2493D7C23D0())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_10()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_6(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_5(unk_0x81873881071CD9FE());
			if (func_7(iVar0) && (!func_11(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_7(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_11(int iParam0)
{
	return Global_35443 == iParam0;
}

