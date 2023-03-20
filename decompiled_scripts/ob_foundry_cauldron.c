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
	
	if (unk_0xC11469DCA6FC3BB5(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD42BD6EB2E0F1677(uScriptParam_0))
		{
			if (unk_0xF15D7EC08DFE28DB(uScriptParam_0) && unk_0x8E34C953364A76DD(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
						{
							uVar0 = unk_0xB417689857646F61(unk_0x096275889B8E0EE0());
							if (unk_0x017C1B3159F79F6C(uVar0))
							{
								if (unk_0x941560D2D45DBFC8(uVar0))
								{
									if (unk_0x4200F14D6F840A9A())
									{
										unk_0x001FF43843028E0C();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x13A3F30A9ED0BC31())
						{
							if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
							{
								if (!unk_0xD42BD6EB2E0F1677(uLocal_4))
								{
									uLocal_4 = unk_0x066A16145417A72D(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x9DD5AFF561E88F2A(uLocal_3))
								{
									if (unk_0xD42BD6EB2E0F1677(uLocal_4))
									{
										uVar0 = unk_0xB417689857646F61(unk_0x096275889B8E0EE0());
										if (unk_0x017C1B3159F79F6C(uVar0))
										{
											if (unk_0x941560D2D45DBFC8(uVar0))
											{
												if (unk_0x4200F14D6F840A9A())
												{
													uLocal_3 = unk_0xBD41E1440CE39800("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0x9DD5AFF561E88F2A(uLocal_3))
	{
		unk_0x22970F3A088B133B(uLocal_3, 0);
	}
	if (unk_0xD42BD6EB2E0F1677(uLocal_4))
	{
		unk_0x0AD8BB0ADAFEDEE5(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x5E8B6D17FF91CD59();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xD3852F22AB713A1F(uParam0, uParam0))
	{
	}
}

