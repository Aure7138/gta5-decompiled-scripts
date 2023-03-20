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
	if (unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_1336615, 1))
		{
			func_17();
		}
		else
		{
			unk_0x5543668CEF76D321(32, 0, -1);
			func_14(0, -1, 0);
			unk_0x3215376E79F6EA18(0);
			iLocal_21 = 1;
		}
	}
	else if (unk_0xC11469DCA6FC3BB5(2))
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
		if (unk_0xD42BD6EB2E0F1677(uScriptParam_0))
		{
			if (unk_0xF15D7EC08DFE28DB(uScriptParam_0))
			{
				switch (iLocal_17)
				{
					case 0:
						if (unk_0x20487F0DA9AF164A(uScriptParam_0))
						{
							Local_18 = { unk_0xA86D5F069399F44D(uScriptParam_0, 1) };
							iLocal_17 = 1;
						}
						break;
					
					case 1:
						if ((unk_0xDBE203DE10B1DA34(uScriptParam_0) && unk_0xFFC96ECB7FA404CA(uScriptParam_0)) && !unk_0x138190F64DB4BBD1(uScriptParam_0))
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
	iVar3 = unk_0x9C1C462D7B1DD1F9(70, 121);
	if (unk_0x03A753E2C8458335())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x9C1C462D7B1DD1F9(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0xF73FBE4845C43B5B(&uVar2, 3);
	unk_0xF73FBE4845C43B5B(&uVar2, 4);
	unk_0xFA28FE3A6246FC30(iVar0);
	while (!unk_0x1283B8B89DD5D1B6(iVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x9A80DDB2BF556FE3(iVar1, unk_0x0B91306DAB5AF83A(Local_18, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
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
		if (!unk_0x03A753E2C8458335())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2437058)
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
	if (!unk_0x4C82BD446C34CACD())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x8E34C953364A76DD(func_4()) == 0)
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
	return Global_2428131.f_572;
}

int func_7(int iParam0)
{
	if (unk_0xC9F59C0A710ECD34(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_2435238;
}

bool func_9()
{
	return Global_2428131.f_567;
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5CE8DE5909565748(1))
	{
		iVar1 = unk_0xA85E614430EFF816(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x57EC5FA4D4D6AFCA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_11(iVar0);
					break;
				
				case 2:
					unk_0x57EC5FA4D4D6AFCA(1, iVar0, &Var4, 3);
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
	
	if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x275F255ED201B937(Var0.f_1);
			if (unk_0xD42BD6EB2E0F1677(uVar3))
			{
				if (unk_0x52BE10F427339B39(uVar3, 0))
				{
					uVar4 = unk_0xB3598EA616C3FFC3(uVar3, 0);
					if (unk_0x0E7910A63E05B12C(uVar4, Var0.f_2) && unk_0xB779D92A280DB7F7())
					{
						if (func_12(uVar4, &bVar5))
						{
							unk_0x745F15A215F2DDF1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x6C9B2BE03BBD5C98(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_12(var uParam0, var uParam1)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		if (!unk_0x138190F64DB4BBD1(uParam0))
		{
			if (unk_0x3BDB448E5390D817(uParam0))
			{
				unk_0xDC19C288082E586E(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x622B1980CBE13332(uParam0, 0))
		{
			if (unk_0x711DB131BD66A278(uParam0))
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
	if (unk_0x1DB8366B5C46DA9E(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0xBFFB35986CAAE58C(uParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
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
	
	iVar0 = unk_0x48A97E77DF5DB711();
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
				if (!unk_0x03A753E2C8458335())
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
			else if (!unk_0x47499F21458D3AFA())
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
		iVar0 = unk_0x48A97E77DF5DB711();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x03A753E2C8458335())
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
	else if (!unk_0x47499F21458D3AFA())
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
	unk_0x5E8B6D17FF91CD59();
}

void func_17()
{
	unk_0x5E8B6D17FF91CD59();
}

