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
	if (unk_0xC11469DCA6FC3BB5(2) || unk_0x0F838D47DE58EDB2())
	{
		unk_0x5E8B6D17FF91CD59();
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
	if (!unk_0x6CFF81397164A1D3(iLocal_19))
	{
		if (!Global_86862)
		{
			unk_0xDC19C288082E586E(iLocal_19, 1, 1);
			if (unk_0x04932A97CB319DE0(iLocal_19, 1435919172) != 7)
			{
				unk_0x0F1ABE64C3C18E5A(iLocal_19);
			}
			Var0 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0) };
			unk_0x49876BF356F39E66(iLocal_19, 1);
			unk_0xF4BF3E3D7FE56705(&uVar3);
			if (!unk_0x52BE10F427339B39(iLocal_19, 0))
			{
				if (!unk_0xE1B9C14B617F05EF(iLocal_19, 0) && !unk_0x52BE10F427339B39(iLocal_19, 0))
				{
					unk_0x26D1C211B43D46E1(0, Var0, 6000);
				}
			}
			unk_0x67BFB35F43BF984D(0, Var0, 6000, 0, 2);
			unk_0xFF7E39890B2840DD(uVar3);
			unk_0xD59C10966EB589EA(iLocal_19, uVar3);
		}
		func_2(iLocal_19);
	}
	while (!unk_0xF5472C80DF2FF847())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_19))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_19))
		{
			unk_0x2AD4789CBFD829EC(iLocal_19, 1);
		}
		unk_0xEB7C3FF98F454165(&iLocal_19);
	}
	Global_86862 = 0;
	unk_0x5E8B6D17FF91CD59();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x4F67E8ECA7D3F667() + 1000;
	while (unk_0x4F67E8ECA7D3F667() < iVar0 && !unk_0xF5472C80DF2FF847())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x6CFF81397164A1D3(uParam0))
	{
		if (iLocal_18 == 1)
		{
			switch (func_5(unk_0x096275889B8E0EE0()))
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
			switch (func_5(unk_0x096275889B8E0EE0()))
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
			switch (func_5(unk_0x096275889B8E0EE0()))
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
	unk_0xD318BF1FC64DD7D9(uParam0, sParam1, sParam2, func_4(iParam3), 0);
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
	
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
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
		return Global_97353.f_29774[iParam0 /*29*/];
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
		if (unk_0xD42BD6EB2E0F1677(Global_87736[iLocal_17]) && !unk_0x6CFF81397164A1D3(Global_87736[iLocal_17]))
		{
			if (Global_87736[iLocal_17] != unk_0x096275889B8E0EE0())
			{
				if (!unk_0x138190F64DB4BBD1(Global_87736[iLocal_17]))
				{
					if (unk_0x52BE10F427339B39(Global_87736[iLocal_17], 0) || !unk_0xEE6AD63ABF59C0B7(Global_87736[iLocal_17]))
					{
						if (unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(Global_87736[iLocal_17], 1), unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), 1) < 10f)
						{
							iLocal_18 = func_5(Global_87736[iLocal_17]);
							if ((iLocal_18 == 0 || iLocal_18 == 2) || iLocal_18 == 1)
							{
								if (iLocal_18 != func_9())
								{
									if (unk_0xD46F9DF1D1273423(Global_87736[iLocal_17], unk_0x096275889B8E0EE0(), 17))
									{
										if (unk_0x52BE10F427339B39(Global_87736[iLocal_17], 0))
										{
											iVar0 = unk_0xB3598EA616C3FFC3(Global_87736[iLocal_17], 0);
										}
										if ((unk_0xD42BD6EB2E0F1677(iVar0) && unk_0xB86D29B10F627379(iVar0, 0)) || !unk_0xD42BD6EB2E0F1677(iVar0))
										{
											*uParam0 = Global_87736[iLocal_17];
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
	if (unk_0xF5472C80DF2FF847())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_10()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_6(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_5(unk_0x096275889B8E0EE0());
			if (func_7(iVar0) && (!func_11(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_7(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_11(int iParam0)
{
	return Global_34913 == iParam0;
}

