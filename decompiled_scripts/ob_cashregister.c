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
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_22 = 0;
	var uScriptParam_0 = 0;
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
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_1368893, 1))
		{
			func_17();
		}
		else
		{
			unk_0x4121A9A0CCC0E014(32, 0, -1);
			func_14(0, -1, 0);
			unk_0xDA6A6B59F261B209(0);
			iLocal_22 = 1;
		}
	}
	else if (unk_0x76BF814AB8D4CAB8(2))
	{
		func_17();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_22 == 1)
		{
			if (func_3())
			{
				func_17();
			}
		}
		if (unk_0x31F12808DC47A9E5(uScriptParam_0))
		{
			if (unk_0x7F92B610D05B72B6(uScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x428E1B96ACD96150(uScriptParam_0))
						{
							Local_19 = { unk_0x761660F5CE986DC4(uScriptParam_0, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x884389A95331F131(uScriptParam_0) && unk_0xBF0517F7142EEB5B(uScriptParam_0)) && !unk_0x90D1FDC9D31B7BE1(uScriptParam_0))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_17();
			}
		}
		else
		{
			func_17();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = unk_0x61E9B3BFA06B017B(70, 121);
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x61E9B3BFA06B017B(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0xD2A9C3F486236CC5(&uVar2, 3);
	unk_0xD2A9C3F486236CC5(&uVar2, 4);
	unk_0x9016574B77A748EE(iVar0);
	while (!unk_0xEDFE27D1AEA0EA7F(iVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x5ABEF538412867C6(iVar1, unk_0xA5D7493D711B335A(Local_19, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
}

int func_2(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(iParam0) * Global_262145);
				iParam0 = unk_0xF2DB717A73826179(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_3()
{
	var uVar0;
	
	func_10(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2459011)
	{
		return 1;
	}
	if (func_8())
	{
		return 1;
	}
	if (func_7(157))
	{
		if (!func_6())
		{
			return 1;
		}
	}
	if (func_7(155))
	{
		return 1;
	}
	if (!unk_0xA1C84586015AE5DB())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0xE7FAF8E78F7D3A73(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	switch (func_5())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_5()
{
	return Global_25233;
}

bool func_6()
{
	return Global_2447128.f_586;
}

int func_7(int iParam0)
{
	if (unk_0xA1B200C8BB1289B7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_2456781;
}

bool func_9()
{
	return Global_2447128.f_581;
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xF6A7C6FEAD04F4B3(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1592539087:
					func_11(iVar0);
					break;
				
				case 1094813140:
					unk_0xF6A7C6FEAD04F4B3(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1903409068)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_11(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x6604E096142B4B55(Var0.f_1);
			if (unk_0x31F12808DC47A9E5(uVar3))
			{
				if (unk_0x657B649BA2AD3582(uVar3, 0))
				{
					uVar4 = unk_0x5AD687C3474F04B4(uVar3, 0);
					if (unk_0xF7FC2DC5308754C4(uVar4, Var0.f_2) && unk_0xD8E9E28C65F6D7A9())
					{
						if (func_12(uVar4, &bVar5))
						{
							unk_0x02FFEDE7A52D9E18(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x4F5FF3F3FDCAB15D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_12(var uParam0, var uParam1)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(uParam0))
		{
			if (unk_0x84E7E48409E0DA9F(uParam0))
			{
				if (!unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(uParam0)))
				{
					unk_0x337F2213526139E0(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xE54DCC6B21FDC95A(uParam0, 0))
		{
			if (unk_0x1800B99666D25740(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_13(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD8BE1F0DC107B5A4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_16();
			}
			else
			{
				return 0;
			}
		}
		if (!func_15())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x44243F2E2F58B8E3())
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
				if (func_9())
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
				if (func_7(155))
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x32BCC4E6A353E146())
			{
				if (!bParam2)
				{
					func_16();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD8BE1F0DC107B5A4();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			if (!bParam2)
			{
				func_16();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x32BCC4E6A353E146())
	{
		if (!bParam2)
		{
			func_16();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_15()
{
	return Global_1312831;
}

void func_16()
{
	unk_0x810C5D6462DD69E6();
}

void func_17()
{
	unk_0x810C5D6462DD69E6();
}

