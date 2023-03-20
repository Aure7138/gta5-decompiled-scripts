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
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_1336615, 1))
		{
			func_17();
		}
		else
		{
			unk_0x097416E6C5CBD31B(32, 0, -1);
			func_14(0, -1, 0);
			unk_0xE5556978B2858C53(0);
			iLocal_21 = 1;
		}
	}
	else if (unk_0xD63E63DFACCEB80E(2))
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
		if (unk_0x746960881FB19A89(uScriptParam_0))
		{
			if (unk_0x65E80118D23AFB04(uScriptParam_0))
			{
				switch (iLocal_17)
				{
					case 0:
						if (unk_0x2722B58EF4A39A5E(uScriptParam_0))
						{
							Local_18 = { unk_0x77009B1C011405A9(uScriptParam_0, 1) };
							iLocal_17 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x4D66F29B0136D0A8(uScriptParam_0) && unk_0xB3CC729BBAA21637(uScriptParam_0)) && !unk_0x34E74FF8690AA4B1(uScriptParam_0))
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
	iVar3 = unk_0x073B65E051D2F03E(70, 121);
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x073B65E051D2F03E(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0xEDB9A377CD8B7F03(&uVar2, 3);
	unk_0xEDB9A377CD8B7F03(&uVar2, 4);
	unk_0x3BC6D217451D6BB7(iVar0);
	while (!unk_0x149162179DBAEDB0(iVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xF8670CA33A75995A(iVar1, unk_0xFE6CFB1749CED843(Local_18, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
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
	if (Global_1315874 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2437036)
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
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_4()) == 0)
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
	return Global_2428162.f_572;
}

int func_7(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_2435128;
}

bool func_9()
{
	return Global_2428162.f_567;
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2E567DCD11FE0296(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_11(iVar0);
					break;
				
				case 2:
					unk_0x2E567DCD11FE0296(1, iVar0, &Var4, 3);
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
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(uVar3))
			{
				if (unk_0x827151D7B70CB853(uVar3, 0))
				{
					uVar4 = unk_0x1161215F69587BDA(uVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(uVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_12(uVar4, &bVar5))
						{
							unk_0xB3216D41373DA6C7(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9187463EB4918A4D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_12(var uParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(uParam0))
		{
			if (unk_0x1F298C7D5F6EEDBF(uParam0))
			{
				unk_0x336AE92FD68DEF98(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xAD2C236C4A4B83C9(uParam0, 0))
		{
			if (unk_0x88A3865085DFB7AD(uParam0))
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
	if (unk_0xCB29E1C3D086FBAE(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(uParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
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
	
	iVar0 = unk_0x56448188B27B0D1C();
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
				if (!unk_0x4B69FB3A5B09A1BA())
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
			else if (!unk_0xB659F73755907B0D())
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
		iVar0 = unk_0x56448188B27B0D1C();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
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
	else if (!unk_0xB659F73755907B0D())
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
	return Global_1315874;
}

void func_16()
{
	unk_0xE60DEFFB2A853900();
}

void func_17()
{
	unk_0xE60DEFFB2A853900();
}

