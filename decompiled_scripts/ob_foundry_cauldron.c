#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	if (unk_0xC968670BFACE42D9(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7239B21A38F536BA(iScriptParam_0))
		{
			if (unk_0xCCBA154209823057(iScriptParam_0) && unk_0x2C83A9DA6BFFC4F9(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							iVar0 = unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6());
							if (unk_0x26B0E73D7EAAF4D3(iVar0))
							{
								if (unk_0x6726BDCCC1932F0E(iVar0))
								{
									if (unk_0xBC72B5D7A1CBD54D())
									{
										unk_0x944955FB2A3935C8();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xCA7D9B86ECA7481B())
						{
							if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
							{
								if (!unk_0x7239B21A38F536BA(iLocal_4))
								{
									iLocal_4 = unk_0xE143FA2249364369(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), true, false, true);
								}
								if (!unk_0x74AFEF0D2E1E409B(iLocal_3))
								{
									if (unk_0x7239B21A38F536BA(iLocal_4))
									{
										iVar0 = unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6());
										if (unk_0x26B0E73D7EAAF4D3(iVar0))
										{
											if (unk_0x6726BDCCC1932F0E(iVar0))
											{
												if (unk_0xBC72B5D7A1CBD54D())
												{
													iLocal_3 = unk_0x1AE42C1660FD6517("scr_obfoundry_cauldron_steam", iLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
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
	if (unk_0x74AFEF0D2E1E409B(iLocal_3))
	{
		unk_0x8F75998877616996(iLocal_3, false);
	}
	if (unk_0x7239B21A38F536BA(iLocal_4))
	{
		unk_0x3AE22DEB5BA5A3E6(&iLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x1090044AD1DA76FA();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(char* sParam0)
{
	if (unk_0x0C515FAB3FF9EA92(sParam0, sParam0))
	{
	}
}

