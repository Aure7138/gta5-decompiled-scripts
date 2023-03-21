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
	
	if (unk_0xD4BE58A7E3E102AC(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD4B321D9096B01FC(uScriptParam_0))
		{
			if (unk_0xA887AF38A5D654D0(uScriptParam_0) && unk_0x222F76006659B0EB(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
						{
							uVar0 = unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203());
							if (unk_0x61837007ACF2F2C2(uVar0))
							{
								if (unk_0x2A29278E6E14C161(uVar0))
								{
									if (unk_0x82CFB7BCD728827E())
									{
										unk_0x8CD04D2D122523B6();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x5B9201742B00334D())
						{
							if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
							{
								if (!unk_0xD4B321D9096B01FC(uLocal_4))
								{
									uLocal_4 = unk_0x91D67DB02D1040F1(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0xFB3E0C95810C1454(uLocal_3))
								{
									if (unk_0xD4B321D9096B01FC(uLocal_4))
									{
										uVar0 = unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203());
										if (unk_0x61837007ACF2F2C2(uVar0))
										{
											if (unk_0x2A29278E6E14C161(uVar0))
											{
												if (unk_0x82CFB7BCD728827E())
												{
													uLocal_3 = unk_0x5C20627D907188D6("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0xFB3E0C95810C1454(uLocal_3))
	{
		unk_0x47E6FFF8419C8442(uLocal_3, 0);
	}
	if (unk_0xD4B321D9096B01FC(uLocal_4))
	{
		unk_0x86A9549BD3D71664(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x9C9E32388A7886A2();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x2553916E420E8EF0(uParam0, uParam0))
	{
	}
}

