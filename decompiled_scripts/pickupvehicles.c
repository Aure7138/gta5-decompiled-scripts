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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	func_4(21);
	if (unk_0xD4BE58A7E3E102AC(18))
	{
		if (unk_0x8FA9CC51D31182EC() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x222F76006659B0EB(joaat("docks_setup")) == 0)
		{
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					iLocal_28 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0xD4B321D9096B01FC(iLocal_28))
			{
				if (unk_0xD960230552BC4165(iLocal_28, 0))
				{
					if (unk_0x759DEE4D113EC07E(iLocal_28, joaat("handler")))
					{
						unk_0x1F4FA01F906F33E5(0, 51);
						if (!unk_0xA062231FC5A2C81C(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0xD4B321D9096B01FC(iLocal_29) || (unk_0xD4B321D9096B01FC(iLocal_29) && unk_0x91D67DB02D1040F1(unk_0xACE5E491FC1B0D37(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0x91D67DB02D1040F1(unk_0xACE5E491FC1B0D37(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0xD4B321D9096B01FC(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (unk_0x808CCEDAA4A2CE74(iLocal_28, iLocal_29))
										{
											if (unk_0x26BB91778477F482(0, 51))
											{
												unk_0xAB9331CBE8C5FD51(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								uLocal_30 = unk_0x9B35D07DCD0F0B43();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x26BB91778477F482(0, 51))
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
	
	iVar0 = unk_0x9B35D07DCD0F0B43();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x9C9E32388A7886A2();
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
	if (unk_0xA2BC31158C8CEFD2(Global_111560.f_9080.f_99.f_219[iVar0], iVar1))
	{
		unk_0x3B76114EC84D5812(&(Global_111560.f_9080.f_99.f_219[iVar0]), iVar1);
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
	if (unk_0xA2BC31158C8CEFD2(Global_111560.f_9080.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xA1E7A40E1F56E511(&(Global_111560.f_9080.f_99.f_219[iVar0]), iVar1);
	return 1;
}

