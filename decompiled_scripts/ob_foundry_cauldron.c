#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
	if (unk_0x24862A9CDC8F8874(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x95CCECA3948CFE7B(uScriptParam_0))
		{
			if (unk_0x265A690A472378A4(uScriptParam_0) && unk_0xCBC8FFE55DC722B5(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
						{
							uVar0 = unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288());
							if (unk_0x8F89BA1339F45476(uVar0))
							{
								if (unk_0x7E76461B9677E81C(uVar0))
								{
									if (unk_0x750E86E98EAACEA9())
									{
										unk_0x8CBF0FAEA6BA6D37();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xB6161F3A3EDA5AA1())
						{
							if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
							{
								if (!unk_0x95CCECA3948CFE7B(uLocal_4))
								{
									uLocal_4 = unk_0xB999434FB1CECA11(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0xCFB07F483F9F95C1(uLocal_3))
								{
									if (unk_0x95CCECA3948CFE7B(uLocal_4))
									{
										uVar0 = unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288());
										if (unk_0x8F89BA1339F45476(uVar0))
										{
											if (unk_0x7E76461B9677E81C(uVar0))
											{
												if (unk_0x750E86E98EAACEA9())
												{
													uLocal_3 = unk_0x9312E3EA66F1F738("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (unk_0xCFB07F483F9F95C1(uLocal_3))
	{
		unk_0x939ED2D95F7BD8A8(uLocal_3, 0);
	}
	if (unk_0x95CCECA3948CFE7B(uLocal_4))
	{
		unk_0xC2BB205CCEB68102(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xA4E0D8FD51F2A6F7();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xF8D041B05C3D1FD4(uParam0, uParam0))
	{
	}
}

