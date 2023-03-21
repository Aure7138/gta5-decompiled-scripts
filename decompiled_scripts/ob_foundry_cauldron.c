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
	
	if (unk_0x5EBD03AF78E7B4DB(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xDC5D81351D6A4DDB(uScriptParam_0))
		{
			if (unk_0x1E99F8A10D565A13(uScriptParam_0) && unk_0x8B1574454E8C2421(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
						{
							uVar0 = unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715());
							if (unk_0x893915B076B1DDF7(uVar0))
							{
								if (unk_0x2A8A410BC14B59BC(uVar0))
								{
									if (unk_0xC18A2519B717415A())
									{
										unk_0x788BCD68EF8935BE();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x5488D97A1366CE04())
						{
							if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
							{
								if (!unk_0xDC5D81351D6A4DDB(uLocal_4))
								{
									uLocal_4 = unk_0x78CED56884DEF3D7(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x059A39F1D399060B(uLocal_3))
								{
									if (unk_0xDC5D81351D6A4DDB(uLocal_4))
									{
										uVar0 = unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715());
										if (unk_0x893915B076B1DDF7(uVar0))
										{
											if (unk_0x2A8A410BC14B59BC(uVar0))
											{
												if (unk_0xC18A2519B717415A())
												{
													uLocal_3 = unk_0x8E3AC3DF6783369A("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0x059A39F1D399060B(uLocal_3))
	{
		unk_0x82E95CCADC55C11E(uLocal_3, 0);
	}
	if (unk_0xDC5D81351D6A4DDB(uLocal_4))
	{
		unk_0xAA1FF14A8DC5C352(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x8F1A9FE6D91AAFEB();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x3CAC2741CC1A631F(uParam0, uParam0))
	{
	}
}

