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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	func_4(21);
	if (unk_0x7547D7CF93115D6D(18))
	{
		if (unk_0x26AE414A8D829787() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x25531002BCF0D968(joaat("docks_setup")) == 0)
		{
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
				{
					iLocal_27 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
				}
				else
				{
					iLocal_27 = 0;
				}
			}
			if (unk_0xFD68187442384158(iLocal_27))
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_27, 0))
				{
					if (unk_0x40923C25A763E8E8(iLocal_27, joaat("handler")))
					{
						unk_0x0756DDDAD8038AC9(0, 51);
						if (!unk_0x3D84FFE098363B73(iLocal_27))
						{
							if (iLocal_31 == 0)
							{
								if (!unk_0xFD68187442384158(iLocal_28) || (unk_0xFD68187442384158(iLocal_28) && unk_0x78608A3628DF265E(unk_0xBF1B13057E5119A4(iLocal_27, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_28))
								{
									iLocal_28 = unk_0x78608A3628DF265E(unk_0xBF1B13057E5119A4(iLocal_27, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0xFD68187442384158(iLocal_28))
								{
									if (func_1(&uLocal_29, 1000))
									{
										if (unk_0x706E9A09986A93EE(iLocal_27, iLocal_28))
										{
											if (unk_0x58FC9C7DF8FE009B(0, 51))
											{
												unk_0x0E271210F335D049(iLocal_27, iLocal_28);
												iLocal_30 = 1;
												iLocal_31 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_30 == 1)
							{
								uLocal_29 = unk_0xF976C624234A4AA8();
								iLocal_30 = 0;
								iLocal_31 = 0;
							}
							if (unk_0x58FC9C7DF8FE009B(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF976C624234A4AA8();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x883793591E631A3B();
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_7311.f_99.f_214[iVar0], iVar1))
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_7311.f_99.f_214[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_7311.f_99.f_214[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_7311.f_99.f_214[iVar0]), iVar1);
	return 1;
}

