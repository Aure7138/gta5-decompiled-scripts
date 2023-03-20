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
	
	if (unk_0x2170E7BC25114A22(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7887B64A08364778(uScriptParam_0))
		{
			if (unk_0x097C50E86C2C5672(uScriptParam_0) && unk_0xAB964FCFAC3C767A(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
						{
							uVar0 = unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126());
							if (unk_0x7B66213B5E371C3F(uVar0))
							{
								if (unk_0x2F81852CEAF88F0D(uVar0))
								{
									if (unk_0xFD3127BF825386EE())
									{
										unk_0x9CD38B75BED5A7C7();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x65A854A1D5D4913A())
						{
							if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
							{
								if (!unk_0x7887B64A08364778(uLocal_4))
								{
									uLocal_4 = unk_0x722BCBA6950595C0(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0xE0FBA7F5811E2E63(uLocal_3))
								{
									if (unk_0x7887B64A08364778(uLocal_4))
									{
										uVar0 = unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126());
										if (unk_0x7B66213B5E371C3F(uVar0))
										{
											if (unk_0x2F81852CEAF88F0D(uVar0))
											{
												if (unk_0xFD3127BF825386EE())
												{
													uLocal_3 = unk_0xA7EFA150E81030E7("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0xE0FBA7F5811E2E63(uLocal_3))
	{
		unk_0xE9445CB924569012(uLocal_3, 0);
	}
	if (unk_0x7887B64A08364778(uLocal_4))
	{
		unk_0x523D268641392C22(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x01DFCA3621B68C4A();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xCC257DA11A122B5F(uParam0, uParam0))
	{
	}
}

