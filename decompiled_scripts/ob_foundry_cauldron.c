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
	
	if (unk_0x2C897F101BA20806(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x538DF9E5B1DF01EB(uScriptParam_0))
		{
			if (unk_0xC3AF8259DB162ECA(uScriptParam_0) && unk_0x16CDA1894CFE0781(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							uVar0 = unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357());
							if (unk_0xF7037F2CC07D58B0(uVar0))
							{
								if (unk_0x02E23868217F22CC(uVar0))
								{
									if (unk_0xA723CE7CA05AC85E())
									{
										unk_0xE8C49E8D4B533F7D();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xEA01082BB3EA9C37())
						{
							if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
							{
								if (!unk_0x538DF9E5B1DF01EB(uLocal_4))
								{
									uLocal_4 = unk_0xF7AA299A75E7C5A1(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0xC9C004EF71A36FBC(uLocal_3))
								{
									if (unk_0x538DF9E5B1DF01EB(uLocal_4))
									{
										uVar0 = unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357());
										if (unk_0xF7037F2CC07D58B0(uVar0))
										{
											if (unk_0x02E23868217F22CC(uVar0))
											{
												if (unk_0xA723CE7CA05AC85E())
												{
													uLocal_3 = unk_0xA61A77F0B90645BB("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0xC9C004EF71A36FBC(uLocal_3))
	{
		unk_0x7B2EA00855157A0A(uLocal_3, 0);
	}
	if (unk_0x538DF9E5B1DF01EB(uLocal_4))
	{
		unk_0x2E674C3D6D338EFA(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x82706E6C897B0FA1();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x9BA82E09A986BA4B(uParam0, uParam0))
	{
	}
}

