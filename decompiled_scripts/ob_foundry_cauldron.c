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
	
	if (unk_0xB9B05E900D325C36(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x76B3C79DE564AFC6(uScriptParam_0))
		{
			if (unk_0x4673A7E6EA033947(uScriptParam_0) && unk_0x7832F791572D5809(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							uVar0 = unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445());
							if (unk_0x68BBDCBE8B7849EB(uVar0))
							{
								if (unk_0xC2902CEA00DDC12E(uVar0))
								{
									if (unk_0xBA99A71EEBA5BD5C())
									{
										unk_0xE21C454556502C7D();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x980AD2F46D0AFC4E())
						{
							if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
							{
								if (!unk_0x76B3C79DE564AFC6(uLocal_4))
								{
									uLocal_4 = unk_0xE5277EB89570BEE8(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0xA6EEE2DF4D4BD73D(uLocal_3))
								{
									if (unk_0x76B3C79DE564AFC6(uLocal_4))
									{
										uVar0 = unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445());
										if (unk_0x68BBDCBE8B7849EB(uVar0))
										{
											if (unk_0xC2902CEA00DDC12E(uVar0))
											{
												if (unk_0xBA99A71EEBA5BD5C())
												{
													uLocal_3 = unk_0x45DE141F258632FC("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0xA6EEE2DF4D4BD73D(uLocal_3))
	{
		unk_0x1D1702144483C47A(uLocal_3, 0);
	}
	if (unk_0x76B3C79DE564AFC6(uLocal_4))
	{
		unk_0x4738E36A70E50A92(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xBEE2834559A8897A();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xB3404E397FF56B3B(uParam0, uParam0))
	{
	}
}

