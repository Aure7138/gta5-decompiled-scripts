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
	struct<3> Local_18 = { 0, 0, 0 } ;
	int iLocal_21 = 0;
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
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_1334840, 1))
		{
			func_17();
		}
		else
		{
			unk_0x4C2DEED020A287EF(32, 0, -1);
			func_14(0, -1, 0);
			unk_0xB43679BBB30F1391(0);
			iLocal_21 = 1;
		}
	}
	else if (unk_0x7547D7CF93115D6D(2))
	{
		func_17();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_21 == 1)
		{
			if (func_3())
			{
				func_17();
			}
		}
		if (unk_0xFD68187442384158(uScriptParam_0))
		{
			if (unk_0xDBBE1D10A2F589A7(uScriptParam_0))
			{
				switch (iLocal_17)
				{
					case 0:
						if (unk_0xFBE2EB4D474675FC(uScriptParam_0))
						{
							Local_18 = { unk_0xBF1B13057E5119A4(uScriptParam_0, 1) };
							iLocal_17 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x74DEF5421E666A8A(uScriptParam_0) && unk_0xDAB2315B565377E3(uScriptParam_0)) && !unk_0x73E2404DC70203CD(uScriptParam_0))
						{
							func_1();
							iLocal_17 = 2;
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
	iVar3 = unk_0x4D3E68F73B727E49(70, 121);
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x4D3E68F73B727E49(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0x3DBE2A7AF9E71C82(&uVar2, 3);
	unk_0x3DBE2A7AF9E71C82(&uVar2, 4);
	unk_0xCBE6AC5010E5CE5C(iVar0);
	while (!unk_0xD291857D0C9C7FEC(iVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x134AE1EC4D58EAE4(iVar1, unk_0xFF447C6CF8EB3D23(Local_18, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
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
	bool bVar0;
	
	func_10(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2436715)
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
	if (!unk_0x0E4B4CA22DBCFA69())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x25531002BCF0D968(func_4()) == 0)
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
	return Global_24444;
}

bool func_6()
{
	return Global_2427935.f_570;
}

int func_7(int iParam0)
{
	if (unk_0x289D054E2E18C82E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_2434971;
}

bool func_9()
{
	return Global_2427935.f_565;
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB301423C53556EA6(1))
	{
		iVar1 = unk_0xAAB64DCC229F922F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6EDD33D6B8546C95(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_11(iVar0);
					break;
				
				case 2:
					unk_0x6EDD33D6B8546C95(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
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
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x687D51F360787909(Var0.f_1);
			if (unk_0xFD68187442384158(uVar3))
			{
				if (unk_0x2A24448FF232F834(uVar3, 0))
				{
					uVar4 = unk_0x78AB10B64129B3D5(uVar3, 0);
					if (unk_0x9067781626AA370D(uVar4, Var0.f_2) && unk_0x0D1738F09A13D367())
					{
						if (func_12(uVar4, &bVar5))
						{
							unk_0xA8B02A3D719BC7B0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB67623A401171555(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_12(var uParam0, var uParam1)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0x73E2404DC70203CD(uParam0))
		{
			if (unk_0x9ACF2D423F8B5749(uParam0))
			{
				unk_0xBAE5DF507EEC53C8(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x51BC2FF711F8CF71(uParam0, 0))
		{
			if (unk_0xFE0D96A75DA37EB0(uParam0))
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
	if (unk_0xB832D52B86777A35(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x52A84D9C3A400EA8(uParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x2B79F83CAD49E762();
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
				if (!unk_0xD95428C8AA1DBBF2())
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
			else if (!unk_0xD5762A6870CA7430())
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
		iVar0 = unk_0x2B79F83CAD49E762();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
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
	else if (!unk_0xD5762A6870CA7430())
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
	return Global_1315872;
}

void func_16()
{
	unk_0x883793591E631A3B();
}

void func_17()
{
	unk_0x883793591E631A3B();
}

