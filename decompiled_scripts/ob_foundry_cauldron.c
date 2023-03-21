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
	
	if (unk_0x9EC5BDC006623C42(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x765F6FEEFF39224F(uScriptParam_0))
		{
			if (unk_0x68135A7434393CC1(uScriptParam_0) && unk_0x1BCDA92AD0A7835B(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
						{
							uVar0 = unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E());
							if (unk_0xDE9B75BB528AC06E(uVar0))
							{
								if (unk_0x5FC25A9F19EB39FA(uVar0))
								{
									if (unk_0x056AEC27A8BE13C6())
									{
										unk_0x13157A56158089D8();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xD3957903B061A8C8())
						{
							if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
							{
								if (!unk_0x765F6FEEFF39224F(uLocal_4))
								{
									uLocal_4 = unk_0x68F833BFE3A28FEA(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0xC2FDDE313D5A5398(uLocal_3))
								{
									if (unk_0x765F6FEEFF39224F(uLocal_4))
									{
										uVar0 = unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E());
										if (unk_0xDE9B75BB528AC06E(uVar0))
										{
											if (unk_0x5FC25A9F19EB39FA(uVar0))
											{
												if (unk_0x056AEC27A8BE13C6())
												{
													uLocal_3 = unk_0x36F0667378D07B9C("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0xC2FDDE313D5A5398(uLocal_3))
	{
		unk_0x91F3E4311D34B364(uLocal_3, 0);
	}
	if (unk_0x765F6FEEFF39224F(uLocal_4))
	{
		unk_0x26ABAE1D971CEACD(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x5894DC159447E10A();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xCE3CFF625BEBAA04(uParam0, uParam0))
	{
	}
}

