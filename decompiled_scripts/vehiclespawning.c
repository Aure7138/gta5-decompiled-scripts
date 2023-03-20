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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	fLocal_63 = 277.7314f;
	Local_65 = { -196.045f, -580.13f, 135.0004f };
	unk_0x0FBCFDA15A0FB2D5(800);
	func_19();
	while (true)
	{
		unk_0x00E80F1717AF17E2();
		func_18();
		if (func_7() || uLocal_62)
		{
			func_3();
		}
		if (!iLocal_58)
		{
			if (!iLocal_57 && unk_0x7E3640C27B17457C())
			{
				unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), Local_65, 1, 0, 0, 1);
				unk_0x99569FEC2425586D(unk_0xD5A676B97920D126(), fLocal_63);
				unk_0x179D2D013C7C5740(Local_65, 2500f, 0);
				unk_0xB6AE7C18ADC0F901(0);
				iLocal_57 = 1;
			}
			else if (unk_0xC9C30ADF21E89D79())
			{
				if (!bLocal_61)
				{
					bLocal_61 = func_2();
				}
				else if (!bLocal_59)
				{
					bLocal_59 = func_1();
				}
				else
				{
					unk_0xFF11D473E95357D3(800);
					iLocal_58 = 1;
				}
			}
		}
	}
}

int func_1()
{
	if (!unk_0x487FFE77C0E4C8AB(uLocal_64, "garage_decor_01"))
	{
		unk_0xDE352D0DE80556DB(uLocal_64, "garage_decor_01");
	}
	else
	{
		unk_0xE6271A7EA458585C(uLocal_64);
		return 1;
	}
	return 0;
}

int func_2()
{
	uLocal_64 = unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126());
	if (unk_0x7B66213B5E371C3F(uLocal_64))
	{
		if (!iLocal_60)
		{
			unk_0x9CB7D0433A29E322(uLocal_64);
			iLocal_60 = 1;
		}
		else if (unk_0x2F81852CEAF88F0D(uLocal_64))
		{
			unk_0xE1C506B745118F16(uLocal_64);
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_56)
	{
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

void func_4()
{
	unk_0x01DFCA3621B68C4A();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_35[iParam0]));
	unk_0xF5116E26EBA83CA9((unk_0xDE6E41B82C16097D(0) - 1));
}

void func_6(var uParam0)
{
	var uVar0;
	
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		if (!unk_0x50CED8EEAE806923(*uParam0))
		{
		}
	}
	if (unk_0x1B982A8B37108B3C(*uParam0))
	{
		uVar0 = unk_0x0DE80E23B2BD02BD(*uParam0);
		unk_0x334B78DD05E664AF(&uVar0);
	}
}

int func_7()
{
	bool bVar0;
	var uVar1;
	
	func_14(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_13())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_12())
	{
		return 1;
	}
	if (func_11(157))
	{
		if (!func_10())
		{
			return 1;
		}
	}
	if (func_11(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	switch (func_9())
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

int func_9()
{
	return Global_25185;
}

bool func_10()
{
	return Global_2443089.f_577;
}

int func_11(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return Global_2452479;
}

bool func_13()
{
	return Global_2443089.f_572;
}

void func_14(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_15(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_15(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_17(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(uVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(uVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_16(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_16(var uParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(uParam0))
		{
			if (unk_0x94482DCC4926EF60(uParam0))
			{
				unk_0xC53606C390BE2727(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(uParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_18()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_19()
{
	unk_0x6AFFC4188D3C82E8(32, 0, -1);
	func_21(0, -1, 0);
	unk_0x1CB2FF4BC0AF8B2C(&uLocal_35, 21);
	if (!func_20())
	{
		func_3();
	}
	unk_0x7E85CEE862B85A74(0);
	if (!unk_0xC5C451876961F4BA("imp_dt1_02_cargarage_a"))
	{
		unk_0x32EAD4829CDBABEF("imp_dt1_02_cargarage_a");
	}
}

int func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1995B52453EF6537())
		{
			return 0;
		}
		if (unk_0x34AA2E80B3872230())
		{
			return 1;
		}
		if (func_13())
		{
			return 0;
		}
		if (func_11(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_21(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
		if (!func_22())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_13())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_11(155))
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92DD6B9655D31C6A())
			{
				if (!bParam2)
				{
					func_4();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92DD6B9655D31C6A())
	{
		if (!bParam2)
		{
			func_4();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_22()
{
	return Global_1315206;
}

