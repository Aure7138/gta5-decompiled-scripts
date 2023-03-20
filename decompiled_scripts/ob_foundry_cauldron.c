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
	
	if (unk_0x8D841F1DD3FA555F(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x86CCCD2FAE9D5E65(uScriptParam_0))
		{
			if (unk_0xEBC80CF8CF0257A5(uScriptParam_0) && unk_0x968BF1C2C695B61A(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							uVar0 = unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE());
							if (unk_0x59F36F53A82C2E72(uVar0))
							{
								if (unk_0x9B710BA2688DD221(uVar0))
								{
									if (unk_0xABA72188CC7BE86B())
									{
										unk_0x18C8823792832C78();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x7A74065A1435C8AB())
						{
							if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
							{
								if (!unk_0x86CCCD2FAE9D5E65(uLocal_4))
								{
									uLocal_4 = unk_0xA0650591A05CB4F6(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x3D675D69D18A10E9(uLocal_3))
								{
									if (unk_0x86CCCD2FAE9D5E65(uLocal_4))
									{
										uVar0 = unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE());
										if (unk_0x59F36F53A82C2E72(uVar0))
										{
											if (unk_0x9B710BA2688DD221(uVar0))
											{
												if (unk_0xABA72188CC7BE86B())
												{
													uLocal_3 = unk_0xAB454B9B11E38180("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0x3D675D69D18A10E9(uLocal_3))
	{
		unk_0xA080515881A08702(uLocal_3, 0);
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_4))
	{
		unk_0xB5713813CBD9E79F(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xC23A229F78DAD92A();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xD994929E13CC1ED5(uParam0, uParam0))
	{
	}
}

